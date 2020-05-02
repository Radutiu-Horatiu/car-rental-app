#pragma once
#include "Auto.h"
#include "AutoRepository.h"
#include <vector>
#include "Rental.h"

using namespace std;

class AutoController: public AutoInRepo
{
private:


public:
	AutoInRepo repo;
	AutoController();
	AutoController(AutoInRepo r);
	~AutoController();

	Auto findAutoById(int id);
	vector <Auto> findAll();

	void sort_autos();

	Kunde saveAuto(Auto car, Kunde client);
	Kunde updateAuto(Auto car1, Auto car2, Kunde& client);
	Kunde deleteAuto(Auto car, Kunde& client);
};
