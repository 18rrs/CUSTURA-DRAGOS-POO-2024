//#include "stdafx.h"
#include "CreditCardAccount.h"

#using <mscorlib.dll>
using namespace System;

void CreditCardAccount::SetCreditLimit(double amount)
{
	creditLimit = amount;
}

bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else
	{
		currentBalance += amount;
		return true;
	}
}

void CreditCardAccount::MakeRepayment(double amount)
{
	currentBalance -= amount;
}

void CreditCardAccount::PrintStatement()
{
	Console::Write("Current balance: ");
	Console::WriteLine(currentBalance);
}

long CreditCardAccount::GetAccountNumber()
{
	return accountNumber;
}



int main() {
	CreditCardAccount^ myAccount; // Declare a handle
	myAccount = gcnew CreditCardAccount; // Create a new CreditCardAccount object
	myAccount->SetCreditLimit(1000);
	myAccount->MakePurchase(1000); // Use the -> operator to invoke member functions
	myAccount->MakeRepayment(700);
	myAccount->PrintStatement();
	long num = myAccount->GetAccountNumber();
	Console::Write("Account number: ");
	Console::WriteLine(num);
}