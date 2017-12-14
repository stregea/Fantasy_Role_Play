#include "stdafx.h"
#include "Balrog.h"
#include <iostream>
#include <string>

using namespace std;


//Inheriting the Default Constructor from the Demon Class
Balrog::Balrog() : Demon()
{
}

//Inheriting the Parameterized Constructor from the Demon Class
Balrog::Balrog(int newStrength, int newHP) : Demon(newStrength, newHP)
{
}

//Returns the characters damage
//Balrogs are fast so they get to attack twice
int Balrog::getDamage()
{
	int damage = (rand() % 100) + 1;

	cout << getSpecies() << " attacks for " << damage << " points!" << endl;

	if (damage <= 5)
	{
		damage = damage + 50;

		cout << "Demonic attack inflicts 50 damage points!" << endl;
	}

	int attack2 = (rand() % 100) + 1;

	cout << "The Balrog's speed attack inflicts " << attack2 << " additional damage points!" << endl;

	damage = damage + attack2;
	return damage;
}

//Returning the species of the character
string Balrog::getSpecies()
{
	return "Balrog";
}