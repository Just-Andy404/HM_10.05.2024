#include "BankAccount.h"
#include <cmath>

BankAccount::BankAccount(string name, string surname, int bankAcc, unsigned int personalMoney)
{
	_name = name;
	_surname = surname;
	_bankAcc = bankAcc;
	_personalMoney = personalMoney;
	_creditUse = 0;
}

unsigned int BankAccount::getMoney()
{
	return _personalMoney;
}

unsigned int BankAccount::getCreditMoney()
{
	return (_creditMoney - _creditUse);
}

int BankAccount::getCreditLimit()
{
	return _creditMoney;
}

void BankAccount::setMoney(unsigned int personalMoney)
{
	_personalMoney = personalMoney;
}

void BankAccount::setCreditMoney(unsigned int creditUse)
{
	_creditUse = creditUse;
}

int BankAccount::_creditMoney = 10000;