#include "pch.h"
#include "CreditCardAccount.h"

using namespace System;

int main()
{
	Console::WriteLine("Creare obiect nou");
	CreditCardAccount^ account1;

	int n = CreditCardAccount::GetNumberOfAccounts();
	Console::WriteLine("Numarul de conturi: {0}", n);
	Console::WriteLine("Nume card: {0}", CreditCardAccount::name);

	account1 = gcnew CreditCardAccount(12345, 2000);
	Console::WriteLine("\nMaking a purchase");
	account1->MakePurchase(300);
	Console::WriteLine("\nMaking a purchase");
	account1->MakePurchase(700);
	Console::WriteLine("\nMaking a purchase");
	account1->MakePurchase(500);
	Console::WriteLine("\nRedeeming points");
	account1->RedeemLoyalityPoints();

	Console::ReadKey();

	return 0;
}