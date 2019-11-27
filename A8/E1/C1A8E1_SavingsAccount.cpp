/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-09-02
 * C1A8E1_SavingsAccount.cpp
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * SavingsAccount implementation file. Defines GetInitialValues member function
 * of SavingsAccount Class.
 */

#include <iostream>
#include "C1A8E1_SavingsAccount.h"
const int BUFFER_SIZE = 60;

using namespace std;

/* prompt user for savings account values and save to object members */
void SavingsAccount::GetInitialValues()
{    
    cout << "Enter the Account Values.\nAccount type: ";
    cin >> type;  
    
    cout << "Owner name: ";
    /* use ws to eliminate unwanted whitespace from input buffer */
    cin >> ws;
    char input[BUFFER_SIZE];
    cin.getline(input, sizeof(input));
    ownerName = input;
    
    cout << "ID number: ";
    cin >> IDnbr;
    
    cout << "Account Balance: ";
    cin >> balance;
    
    cout << "Account closure penalty percent: ";
    cin >> closurePenaltyPercent;
}
