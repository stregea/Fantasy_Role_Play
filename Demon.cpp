#include "stdafx.h"
#include <iostream>
#include <string>
#include "Demon.h"

using namespace std;

//Inherits the Creature() constructor
Demon::Demon() : Creature()
{
}

//Inherits the Parameterized Constructor from the Creature class
Demon::Demon(int newStrength, int newHP) : Creature(newStrength,newHP)
{
}

//Returns the damage dealt by a demon.
//With a 5% chance, demons can inflict 50 extra damage.
int Demon::getDamage()
{
	int damage = (rand() % 100) + 1;

	if (damage <= 5)
	{
		damage = damage + 50;

		cout << " demonic attack inflicts 50 additional damage points!" << endl;
	}

	return damage;
}

string Demon::getSpecies()
{
	return "Demon";
}
