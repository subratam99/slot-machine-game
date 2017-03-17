/*
 * Author: Subrata Majumder
 * Date  : JUl 23, 2016
 */

#ifndef __RANDOMNUMBER__
#define __RANDOMNUMBER__
#include<iostream>

enum SlotSymbol {
   SlotSymbol_A,
   SlotSymbol_K,
   SlotSymbol_Q,
   SlotSymbol_J,
   SlotSymbol_10,
   SlotSymbol_9 
};

class RandomNumber
{
public:
    static SlotSymbol GetRandomNumber();
    virtual ~RandomNumber() = 0;
};

#endif
