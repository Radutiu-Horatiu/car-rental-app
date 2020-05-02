#pragma once
#include "Kunde.h"
#include "Auto.h"
#include <vector>
#include "Reservierung.h"

using namespace std;

class Rental
{
public:

	vector<Kunde> Kunden;
	vector<Auto> Autos;
	vector<Reservierung> Reservations;

	Rental();
	Rental(vector<Kunde>& Kunden, vector<Auto>& Autos, vector<Reservierung>& Reservations);
	void addClient(Kunde c);
	void deleteClient(Kunde c);
	void updateClient(Kunde& c, string NAME);
	void addAuto(Auto a);
	void deleteAuto(Auto a);
	void show_orders();
	void reserve_auto(Kunde person, Auto car, int days);
}; 