/*
 * Author: Subrata Majumder
 * Date  : JUl 23, 2016
 */

#include"Usage.hpp"

Usage* Usage::_inst = 0;

Usage*
Usage::instance()
{
    if(_inst == 0 ) {
        _inst = new Usage();
    }
    return _inst; 
}

string
Usage::getUsageStr(int i)
{
    string str;
    switch(i) {
    case 1:
        str = "Insert Money (Add Credit)";
        break;
    case 2:
        str = "Cashout";
        break;
    case 3:
        str = "Show Balance";
        break;
    case 4:
        str = str = "Spin";
        break;
    default:
        str = "Error : wrong choice";
   }
   return str;
}

int
Usage::getChoice()
{
    int input = 0;
    while (input < 1 || input > 6) {
        cout<<"Enter Choice(between 1 and 6) : ";
        if(!(cin>>input)) {
            cin.clear();
            cin.ignore();
            cout<<endl;
        }        
    }
    return input;
}

int
Usage::getCredit()
{
    int input = 0;
    while (true) {
        cout<<"Enter Credit(number) : ";
        if (!(cin>>input)) {
            cin.clear();
            cin.ignore();
            cout<<endl;
        } else {
            break;
        }
    }
    return input;
}

void 
Usage::outputUsage()
{
    cout<<"*******************************************"<<endl;
    cout<<"You need credit 10 to play payline 1     **"<<endl;
    cout<<"You need credit 20 to play payline 2 & 3 **"<<endl;
    cout<<"You need credit 30 to play payline 4 & 5 **"<<endl;
    cout<<"You need credit 60 to play payline 1-5   **"<<endl;
    cout<<"** Enter a number from following choices **"<<endl;
    cout<<"** Insert Money (Add Credit)       : 1   **"<<endl;
    cout<<"** Cashout                         : 2   **"<<endl;
    cout<<"** Show Balance                    : 3   **"<<endl;
    cout<<"** Spin                            : 4   **"<<endl;
    cout<<"*******************************************"<<endl;
}

void 
Usage::action(int choice, User& u, Slot& s)
{
    int credit;
    switch(choice) {
    case 1:
        credit = getCredit();
        u.plusCredit(credit);
        credit = u.getBalance();
        cout<<"Balance is "<<credit<<endl;
        break;
    case 2:
        credit = u.getBalance();
        u.minusCredit(credit);
        cout<<"Cashout value is "<<credit<<endl;
        break;
    case 3:
        credit = u.getBalance();
        cout<<"Balance is "<<credit<<endl;
        break;
    case 4:
        s.startSpin();
    }
}

