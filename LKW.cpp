#include "Auto.h"
#include "LKW.h"
#include <iostream>
#include <string>

using namespace std;

LKW::LKW()
{
	Gesamtgewicht = 0;
	Bezeichnung = "?";
}

LKW::LKW(double Gesamtgewicht, string Bezeichnung, int id, string Marke, string Modell)
{
	this->Gesamtgewicht = Gesamtgewicht;
	this->Bezeichnung = Bezeichnung;
}

void LKW::Load()
{
	Gesamtgewicht += 1;
}

void LKW::Unload()
{
	if (Gesamtgewicht > 0)
		Gesamtgewicht -= 1;
	else
		cout << "Gesamtgewicht ist schon 0! Kann man nicht reduzieren\n";
}
