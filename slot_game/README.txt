Author: Subrata Majumder
Date  : Jul 23, 2016
Game  : slot_game

Few things I couldn't make out from the document. First is the value of each credit. So I have put 10 as the value of 1 credit. EXTRA is 2 credit, value 20. EXTRA EXTRA is 3 credit, value 30. If account balance is 10, slot machine will play payline 1. Then , if remaining account balance is 20, slot machine will play payline 2 and 3. Next, if remaining account balance is 30, slot machine will play payline 5 and 6. Second is the sum of chance of symbol occurring. Sum must be 100. But it is 90. So I put chance of symbol '9' occurring is 40 instead of 30. 

I have used Apple MacBook to develop the code. Following is the system details. I have tried to use several features of C++ to underscore my c++ expertise. 

SJC-ML-MAJUMDER:slot_game majumder$ uname -a
Darwin SJC-ML-MAJUMDER 14.5.0 Darwin Kernel Version 14.5.0: Thu Apr 21 20:40:54 PDT 2016; root:xnu-2782.50.3~1/RELEASE_X86_64 x86_64
SJC-ML-MAJUMDER:slot_game majumder$ 

SJC-ML-MAJUMDER:slot_game majumder$ g++ -v
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
Apple LLVM version 7.0.2 (clang-700.1.81)
Target: x86_64-apple-darwin14.5.0
Thread model: posix
SJC-ML-MAJUMDER:slot_game majumder$ 

ZIP file contains a makefile.  Use make to compile the code. Name of the executable will be "slot_game".

SJC-ML-MAJUMDER:slot_game majumder$ make
make: `slot_game' is up to date.
SJC-ML-MAJUMDER:slot_game majumder$ 

To unzip the file use "unzip". 

SJC-ML-MAJUMDER:Downloads majumder$ unzip slot_game.zip 

User Guide 

Screen 1
SJC-ML-MAJUMDER:slot_game majumder$ ./slot_game 
*******************************************
You need credit 10 to play payline 1     **
You need credit 20 to play payline 2 & 3 **
You need credit 30 to play payline 4 & 5 **
You need credit 60 to play payline 1-5   **
** Enter a number from following choices **
** Insert Money (Add Credit)       : 1   **
** Cashout                         : 2   **
** Show Balance                    : 3   **
** Spin                            : 4   **
*******************************************
Enter Choice(between 1 and 6) : 

Screen 2
Enter Choice(between 1 and 6) : 1
Your Choice is "Insert Money (Add Credit)"
Enter Credit(number) : 120
Balance is 120

Screen 3
Enter Choice(between 1 and 6) : 4
Your Choice is "Spin"
*******************************************
      K   10  10
      10  J   9 
      9   9   Q 
*******************************************
**** payline 1 win is 0
**** payline 2 win is 0
**** payline 3 win is 15
**** payline 5 win is 0
**** payline 6 win is 0
**** Your Win is 15 ***
**** Your Balance is 75 ***

Screen 4
Enter Choice(between 1 and 6) : 3
Your Choice is "Show Balance"
Balance is 75

Screen 5
Enter Choice(between 1 and 6) : 2
Your Choice is "Cashout"
Cashout value is 75

Screen 6
Enter Choice(between 1 and 6) : 4
Your Choice is "Spin"
**** Your Balance is 0 ***
**** Pleas add credit ****

Screen 7
Enter Choice(between 1 and 6) : 4
Your Choice is "Spin"
*******************************************
      9   9   9 
      Q   J   K 
      J   K   J 
*******************************************
**** payline 1 win is 0
**** payline 2 win is 45
**** payline 3 win is 0
**** payline 5 win is 0
**** payline 6 win is 35
**** Your Win is 80 ***
**** Your Balance is 105 ***

Screen 8
Enter Choice(between 1 and 6) : 4
Your Choice is "Spin"
*******************************************
      9   Q   9 
      10  9   J 
      9   9   9 
*******************************************
**** payline 1 win is 0
**** payline 2 win is 0
**** payline 3 win is 45
**** payline 5 win is 45
**** payline 6 win is 45
**** Your Win is 135 ***
**** Your Balance is 180 ***
