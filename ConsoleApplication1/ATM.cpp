#include "ATM.h"
#include "BankAccount.h"
#include "ArgumentException.h"
#include "InsufficientFundsException.h"

void ATM::withdrawMoney(BankAccount* acc, int money)
{
	if (money >= 0)
	{
		accCheck(acc, money);
		try
		{
			if (acc->getMoney() < money)
			{
				acc->setCreditMoney(money - acc->getMoney());
				acc->setMoney(0);
			}
			else
				acc->setMoney(acc->getMoney() - money);

		}
		catch (const InsufficientFundsException& ex)
		{
			std::cerr << "Îøèáêà: " << ex.what() << std::endl;
		}
	}
	else
	{
		throw new ArgumentException("Incorrect value");
	}
}


void ATM::putMoney(BankAccount* acc, int money)
{
	if (money >= 0)
	{
		if (acc->getCreditMoney() != acc->getCreditLimit())
		{
			acc->setMoney(money - (acc->getCreditLimit() - acc->getCreditMoney()));
			acc->setCreditMoney(0);
		}
		else
			acc->setMoney(acc->getMoney() + money);
	}
	else
		throw ArgumentException("Incorrect value");
}

void ATM::accCheck(BankAccount* acc, int money)
{
	if ((acc->getMoney() + acc->getCreditMoney()) < money)
	{
		throw InsufficientFundsException("Not enough money");
	}
}

void ATM::chackBalance(BankAccount* acc)
{
	cout << "---------------------------------------" << endl;
	cout << "Money: " << acc->getMoney() << endl;
	cout << "Credit money use: : " << acc->getCreditLimit() - acc->getCreditMoney() << endl;
	cout << "Credit limit: " << acc->getCreditLimit() << endl;
	cout << "---------------------------------------" << endl;
}