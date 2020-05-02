#pragma once
#include "Kunde.h"
#include "Auto.h"
class Reservierung
{
private:

	Kunde person;
	Auto car;
	int days;

public:

	Reservierung();
	Reservierung(Kunde person, Auto car, int days);

	Kunde get_person();
	void set_person(Kunde new_person);

	Auto get_car();
	void set_car(Auto new_car);

	int get_days();
	void set_days(int new_days);

};

