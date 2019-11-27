/*
 * Nicholas Schantz U08416544
 * nschantz21@gmail.com
 * C/C++ Programming I
 * 141081 Ray Mitchell
 * 2019-09-02
 * C1A8E1_SavingsAccount.h
 * Linux Ubuntu 16.04.4 LTS
 * g++ 5.4.0
 * 
 * Define simple Savings Account Class. Class must define member functions to
 * get user input to populate class attributes and to display those attributes.
 * Class must also be able to calculate account closure penalty.
 */

#ifndef C1A8E1_SAVINGSACCOUNT_H
#define C1A8E1_SAVINGSACCOUNT_H

const double TOPERCENT = 1e-2;

#include <iostream>
#include <string>

class SavingsAccount
{
    /* general account information */
    int type;
    std::string ownerName;
    long IDnbr;
    double balance, closurePenaltyPercent;
    
/* make member functions public so they can be accessed legally */
public:
    /* Function prototypes */
    void GetInitialValues();
    
    /* Make these functions const. They won't alter the object data */
    void DisplayValues() const;
    
    double CalculatePenalty() const {
        return(balance * closurePenaltyPercent * TOPERCENT);
    }
};

inline void SavingsAccount::DisplayValues() const {
    std::cout << "Account type: " << type << '\n'
        << "Owner name: " << ownerName << '\n'
        << "ID number: " << IDnbr << '\n'
        << "Account Balance: " << balance << '\n'
        << "Account closure penalty percent: " << closurePenaltyPercent
        << '\n';
}

#endif
