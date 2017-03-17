/*
 * Author: Subrata Majumder
 * Date  : JUl 23, 2016
 */

#include"RandomNumber.hpp"
#include"Slot.hpp"

void
Slot::assignUser(User *u)
{
    _user = u;
}

void
Slot::removeUser()
{
    _user = NULL;
}
void
Slot::PayLine()
{
    int reward  = 0;
    int win     = 0;
    int balance = _user->getBalance();
    if (balance >=CREDIT) {
        _user->minusCredit(CREDIT);
        // play paly line 1
        reward = calculatePayLine(_left_col[1], _middle_col[1], _right_col[1]);
        cout<<"**** payline 1 win is "<<reward<<endl;
    }
    balance = _user->getBalance();
    if (balance >=EXTRA) {
        // play pay line 2,3
        _user->minusCredit(EXTRA);
        // payline 2
        win = calculatePayLine(_left_col[0], _middle_col[0], _right_col[0]);
        reward += win;
        cout<<"**** payline 2 win is "<<win<<endl;
        // payline 3
        win = calculatePayLine(_left_col[2], _middle_col[2], _right_col[2]);
        reward += win;
        cout<<"**** payline 3 win is "<<win<<endl;
    }
    balance = _user->getBalance();
    if (balance >=EXTRA_EXTRA) {
        // play pay line 4,5
        _user->minusCredit(EXTRA_EXTRA);
        // payline 5
        win = calculatePayLine(_left_col[0], _middle_col[1], _right_col[2]);
        reward += win;
        cout<<"**** payline 5 win is "<<win<<endl;
        // payline 6
        win = calculatePayLine(_left_col[2], _middle_col[1], _right_col[0]);
        reward += win;
        cout<<"**** payline 6 win is "<<win<<endl;
    }
    cout<<"**** Your Win is "<<reward<<" ***"<<endl;
    _user->plusCredit(reward);
}

int 
Slot::calculatePayLine(SlotSymbol s1, SlotSymbol s2, SlotSymbol s3)
{
    int reward = 0;
    if(s1 == SlotSymbol_A && s2 == SlotSymbol_A && s3 == SlotSymbol_A) {
        reward = 150;
    } else if (s1 == SlotSymbol_K && s2 == SlotSymbol_K && s3 == SlotSymbol_K) {
        reward = 100;
    } else if (s1 == SlotSymbol_Q && s2 == SlotSymbol_Q && s3 == SlotSymbol_Q) {
        reward = 90;
    } else if (s1 == SlotSymbol_J && s2 == SlotSymbol_J && s3 == SlotSymbol_J) {
        reward = 80;
    } else if (s1 == SlotSymbol_10 && s2 == SlotSymbol_10 && s3 == SlotSymbol_10) {
        reward = 50;
    } else if (s1 == SlotSymbol_9 && s2 == SlotSymbol_9 && s3 == SlotSymbol_9) {
        reward = 45;
    } else if (s1 == SlotSymbol_A && s2 == SlotSymbol_A ) {
        reward = 75;
    } else if (s1 == SlotSymbol_K && s2 == SlotSymbol_K ) {
        reward = 50;
    } else if (s1 == SlotSymbol_Q && s2 == SlotSymbol_Q) {
        reward = 40;
    } else if (s1 == SlotSymbol_J && s2 == SlotSymbol_J) {
        reward = 35;
    } else if (s1 == SlotSymbol_10 && s2 == SlotSymbol_10) {
        reward = 20;
    } else if (s1 == SlotSymbol_9 && s2 == SlotSymbol_9) {
        reward = 15;
    }
    return reward;
}

void
Slot::startSpin()
{
    int balance = _user->getBalance();
    if (_user && balance >= CREDIT) {
        for(int i = 0; i < 3; i++) {
            _left_col[i] = RandomNumber::GetRandomNumber(); 
        }
        for(int i = 0; i < 3; i++) {
            _middle_col[i] = RandomNumber::GetRandomNumber(); 
        }
        for(int i = 0; i < 3; i++) {
            _right_col[i] = RandomNumber::GetRandomNumber(); 
        }
        display(); 
        PayLine();
        balance = _user->getBalance();
        cout<<"**** Your Balance is "<<balance<<" ***"<<endl;
    } else {
        cout<<"**** Your Balance is "<<balance<<" ***"<<endl;
        cout<<"**** Pleas add credit ****"<<endl;
    }
}

Slot::Slot()
{
    for(int i = 0; i < 3; i++) {
        _left_col[i] = SlotSymbol_A; 
    }
    for(int i = 0; i < 3; i++) {
        _middle_col[i] = SlotSymbol_A; 
    }
    for(int i = 0; i < 3; i++) {
        _right_col[i] = SlotSymbol_A; 
    }
    _user = NULL;
}

string 
Slot::strSymbol(SlotSymbol sym)
{
   string str;
   switch(sym) {
   case SlotSymbol_A:
       str = "A ";
       break;
   case SlotSymbol_K:
       str = "K ";
       break;
   case SlotSymbol_Q:
       str = "Q ";
       break;
   case SlotSymbol_J:
       str = "J ";
       break;
   case SlotSymbol_10:
       str = "10";
       break;
   case SlotSymbol_9:
       str = "9 ";
       break;
   }
   return str;
}

void
Slot::display()
{
    cout<<"*******************************************"<<endl;
    cout<<"      "<<strSymbol(_left_col[0])<<"  "<<strSymbol(_middle_col[0])<<"  "<<strSymbol(_right_col[0])<<endl;
    cout<<"      "<<strSymbol(_left_col[1])<<"  "<<strSymbol(_middle_col[1])<<"  "<<strSymbol(_right_col[1])<<endl;
    cout<<"      "<<strSymbol(_left_col[2])<<"  "<<strSymbol(_middle_col[2])<<"  "<<strSymbol(_right_col[2])<<endl;
    cout<<"*******************************************"<<endl;
}
