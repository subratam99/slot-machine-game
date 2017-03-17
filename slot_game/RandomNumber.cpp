/*
 * Author: Subrata Majumder
 * Date  : JUl 23, 2016
 */

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"RandomNumber.hpp"

SlotSymbol
RandomNumber::GetRandomNumber()
{
    SlotSymbol symbol;
    int ret = rand() % 100;
    if (ret <=4) {
        symbol = SlotSymbol_A; // A - 5%
    } else if (ret >=5 && ret <=14) {
        symbol = SlotSymbol_K; // K - 10%
    } else if (ret >= 15 && ret <=24) {
        symbol = SlotSymbol_Q; // Q - 10%
    } else if (ret >= 25 && ret<= 39) {
        symbol = SlotSymbol_J; // J - 15%
    } else if (ret >= 40 && ret <= 59) {
        symbol = SlotSymbol_10; // 10 - 20%
    } else if (ret >=60 && ret <=99) {
        symbol = SlotSymbol_9; // 9 - 40%
    }
    return symbol;
}

RandomNumber::~RandomNumber()
{
}
