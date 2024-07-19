#pragma once
#include <iostream>
using namespace std;
#include "BankAccount.h"
#include "ArgumentException.h"
#include "InsufficientFundsException.h"

class ATM
{
public:
	void withdrawMoney(BankAccount*, int);
	void putMoney(BankAccount*, int);
	void accCheck(BankAccount*, int);
	void chackBalance(BankAccount*);
};