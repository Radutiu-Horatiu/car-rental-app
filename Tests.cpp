#include "Tests.h"
#include "Auto.h"
#include "PKW.h"
#include "LKW.h"
#include "Kunde.h"
#include "Rental.h"
#include <iostream>
#include <assert.h>
#include "AutoRepository.h"
#include "CrudRepo.h"
#include <vector>
using namespace std;

void TestRepo()
{
	cout << "\nTest Repo\n";
	CrudRepository<Auto>* p = new AutoInRepo;
	vector <Auto> masini;
	vector <Auto> returnare;

	Auto a1(1, "a1", "a1");
	Auto a2(2, "a2", "a2");
	Auto a3(3, "a3", "a3");
	Auto a4(4, "a4", "a4");

	returnare.push_back(p->save(a1));
	returnare.push_back(p->save(a2));
	returnare.push_back(p->save(a3));
	returnare.push_back(p->save(a4));

	masini = p->findAll();

	vector<Auto> aux;
	aux = p->findAll();
	for (int i = 0; i < 4; i++)
	{
		//cout << aux[i].get_Marke() << '\n';
	}

	returnare.push_back(p->update(a1,"marca_noua"));

	returnare.push_back(p->del(2));
	aux = p->findAll();

	cout << '\n';
	for (int i = 0; i < aux.size(); i++)
	{
		//cout << aux[i].get_Marke() << '\n';
	}
}

void Tests()
{
	cout << "\nTest Add\n";

	Rental r;

	Kunde k1(1, "client1");
	Kunde k2(2, "client2");

	Auto a1(1, "bmw", "seria3");
	PKW p1("test", 2, "exemplu", "exemplu");
	LKW l1(1000,"bezeichnung", 3, "exemplu", "exemplu");

	r.addAuto(a1);
	r.addAuto(p1);
	r.addAuto(l1);

	r.addClient(k1);
	r.addClient(k2);

	assert(r.Kunden.size() == 2);
	assert(r.Autos.size() == 3);

	cout << "\nTest Delete\n";

	r.deleteAuto(a1);
	assert(r.Autos.size() == 2);

	r.deleteAuto(p1);
	r.deleteAuto(l1);
	assert(r.Autos.size() == 0);

	cout << "\nTest Update\n";

	r.updateClient(k1, "krisztian");
	assert(k1.get_name() == "krisztian");
}

void TestActions()
{
	cout << "\nTest Actions\n";

	Rental r;

	Kunde k1(1, "client1");
	Kunde k2(2, "client2");

	Auto a1(1, "bmw", "seria3");
	PKW p1("test", 2, "exemplu", "exemplu");
	LKW l1(1000, "bezeichnung", 3, "exemplu", "exemplu");

	r.addAuto(a1);
	r.addAuto(p1);
	r.addAuto(l1);

	r.addClient(k1);
	r.addClient(k2);

	l1.Load();
	l1.Load();
	l1.Unload();
	l1.Load();

	assert(l1.get_Gesamtgewicht() == 1002);
}