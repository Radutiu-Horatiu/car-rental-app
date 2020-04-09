#pragma once
#include <vector>
#include "CrudRepo.h"
using namespace std;

class AutoInRepo: public ​CrudRepository <Auto>
{
private:

	vector <Auto> AutoInMemoryRepo;

public:
	AutoInRepo();

	~AutoInRepo();

	Auto findOne(int id);

	Auto findAll();

	Auto save();

	Auto del();

	Auto update();

};