#include "PKW.h"
#include "Auto.h"
#include <iostream>

using namespace std;

PKW::PKW(string Sonderausstattungen, int ID, string MARKE, string MODELL)
{
	this->Sonderausstattungen = Sonderausstattungen;
	id = ID;
	Marke = MARKE;
	Modell = MODELL;
}

PKW::PKW()
{
	Sonderausstattungen = "?";
}

