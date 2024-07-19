#pragma once
#include <iostream>
using namespace std;

class BankAccount
{
	string _name;
	string _surname;
	int _bankAcc;
	unsigned int _personalMoney;
	unsigned int _creditUse;
	static int _creditMoney;

public:
	BankAccount(string, string, int, unsigned int);
	unsigned int getMoney();
	unsigned int getCreditMoney();
	int getCreditLimit();
	void setMoney(unsigned int);
	void setCreditMoney(unsigned int);


};