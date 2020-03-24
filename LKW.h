#pragma once
#include <string>
#include <iostream>
#include "Auto.h"

using namespace std;

class LKW : public Auto
{
private:

	int Gesamtgewicht;
	string Bezeichnung;

public:
	LKW();
	LKW(double Gesamtgewicht, string Bezeichnung, int id, string Marke, string Modell) :Auto(id, Marke, Modell) {};
	void Load();
	void Unload();

};




