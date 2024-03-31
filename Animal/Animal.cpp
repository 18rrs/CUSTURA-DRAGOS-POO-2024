#include "pch.h"

using namespace System;

ref class Animal
{
public:
	int legs;

	void SetName(String^ nm)
	{
		name = nm;
	}
	String^ GetName() { return name; }
private:
	String^ name;
};

int main(array<System::String^>^ args)
{
	Animal cal, oaie;
	cal.SetName("Cal");
	cal.legs = 4;
	oaie.SetName("Oaie");
	oaie.legs = 4;

	Console::WriteLine("Animal  1 - nume: {0}, picioare: {1}", cal.GetName(), cal.legs);
	Console::WriteLine("Animal  2 - nume: {0}, picioare: {1}", oaie.GetName(), oaie.legs);
	Console::WriteLine();
	return 0;
}
