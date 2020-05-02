#include "Reservierung.h"

Reservierung::Reservierung() 
{
	this->days = 0;
}

Reservierung::Reservierung(Kunde person, Auto car, int days)
{
	this->person = person;
	this->car = car;
	this->days = days;
}

Kunde Reservierung::get_person()
{
	return this->person;
}

void Reservierung::set_person(Kunde new_person)
{
	this->person = new_person;
}

Auto Reservierung::get_car()
{
	return this->car;
}

void Reservierung::set_car(Auto new_car)
{
	this->car = new_car;
}

int Reservierung::get_days()
{
	return this->days;
}

void Reservierung::set_days(int new_days)
{
	this->days = new_days;
}
