#include "PKW.h"
#include "Auto.h"
#include <iostream>

using namespace std;

PKW::PKW(string Sonderausstattungen, int id, string Marke, string Modell) :Auto(id, Marke, Modell)
{
	this->Sonderausstattungen = Sonderausstattungen;
}

PKW::PKW()
{
	Sonderausstattungen = "?";
}

