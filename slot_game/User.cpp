/*
 * Author: Subrata Majumder
 * Date  : JUl 23, 2016
 */

#include"User.hpp"

User::User(string name)
{
    _name    = name;
    _balance = 0;
}

void
User::plusCredit(int credit)
{
    _balance += credit;
}

void
User::minusCredit(int credit)
{
    _balance -= credit;
}

int
User::getBalance()
{
    return _balance;
}

string
User::showName()
{
    return _name;
}
