/*
 * Author: Subrata Majumder
 * Date  : JUl 23, 2016
 */

#ifndef __USAGE__
#define __USAGE__

#include<iostream>
#include<string>
#include"User.hpp"
#include"Slot.hpp"

using namespace std;

class Usage
{
public:
    static Usage * instance();
    string getUsageStr(int i);
    int getChoice();
    int getCredit();
    void outputUsage();
    void action(int choice, User &u, Slot& s);
private:
    static Usage * _inst;
    Usage() {}
    ~Usage() {}
};

#endif
