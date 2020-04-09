#include "CrudRepo.h"
#include "AutoRepository.h"
#include <string>

using namespace std;

Auto AutoInRepo::findOne(int id)
{
	Auto null_auto;

	for (int i = 0; i < vehicles.size(); i++)
		if (vehicles[i].get_id() == id)
			return vehicles[i];

	return null_auto;

}

vector <Auto> AutoInRepo::findAll()
{
	return vehicles;
}

Auto AutoInRepo::save(Auto new_car)
{
	Auto null_auto;

	for (int i = 0; i < vehicles.size(); i++)
		if (vehicles[i].get_id() == new_car.get_id())
			return vehicles[i];

	vehicles.push_back(new_car);
	return null_auto;
}

Auto AutoInRepo::del(int id)
{
	Auto null_auto;

	for (int i = 0; i < vehicles.size(); i++)
		if (vehicles[i].get_id() == id)
		{
			vehicles.erase(vehicles.begin() + i);
			return vehicles[i];
		}

	return null_auto;
}

Auto AutoInRepo::update(Auto car, string marke)
{	
	Auto null_auto;

	for (int i = 0; i < vehicles.size(); i++)
		if (vehicles[i].get_id() == car.get_id())
		{
			vehicles[i].set_Marke(marke);
			car = vehicles[i];
			return vehicles[i];
		}

	return null_auto;
}

