#include "Tests.h"
#include "Auto.h"
#include "PKW.h"
#include "LKW.h"
#include "Kunde.h"
#include "Rental.h"
#include <iostream>
#include <assert.h>
using namespace std;
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
	//cout << k1.get_name();
	//assert(k1.get_name() == "krisztian");
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

	assert(l1.Gesamtgewicht == 1002);
}