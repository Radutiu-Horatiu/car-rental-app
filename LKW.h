#pragma once
#include <string>
#include <iostream>
#include "Auto.h"

using namespace std;

class LKW : public Auto
{
private:

public:

	int Gesamtgewicht;
	string Bezeichnung;

	LKW();
	LKW(int Gesamtgewicht, string Bezeichnung, int ID, string MARKE, string MODELL);
	void Load();
	void Unload();

};




