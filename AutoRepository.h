#pragma once
#include <vector>
#include "CrudRepo.h"
using namespace std;

class AutoInRepo: public CrudRepository<Auto>
{
private:

	vector <Auto> vehicles;

public:

	Auto findOne(int id);

	vector <Auto> findAll();

	Auto save(Auto new_car);

	Auto del(int id);

	Auto update(Auto car, string marke);

};
