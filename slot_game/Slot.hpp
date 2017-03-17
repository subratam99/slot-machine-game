/*
 * Author: Subrata Majumder
 * Date  : JUl 23, 2016
 */

#ifndef _SLOT_
#define _SLOT_
#include "RandomNumber.hpp"
#include "User.hpp"
#include<string>

#define CREDIT 10
#define EXTRA  20
#define EXTRA_EXTRA 30

class Slot
{
public:
    Slot();
    void startSpin();
    void assignUser(User *u);
    void removeUser();
private:
    SlotSymbol _left_col[3];
    SlotSymbol _middle_col[3];
    SlotSymbol _right_col[3];
    User * _user;
    void display();
    string strSymbol(SlotSymbol sym);
    void PayLine();
    int calculatePayLine(SlotSymbol s1, SlotSymbol s2, SlotSymbol s3);
};

#endif
