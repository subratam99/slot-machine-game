/*
 * Author: Subrata Majumder
 * Date  : JUl 23, 2016
 */

#ifndef __USER__
#define __USER__
#include<string>

using namespace std;
class User
{
public:
    User(string name);
    void plusCredit(int credit);
    void minusCredit(int credit);
    int getBalance();
    string showName();
private:
    int _balance;
    string _name;
};

#endif
