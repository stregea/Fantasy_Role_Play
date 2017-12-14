#include "stdafx.h"
#include "Cyberdemon.h"
#include <iostream>
#include <string>


//Default Constructor inheriting from the Demon Constructor
Cyberdemon::Cyberdemon() : Demon()
{
}

//Inheriting the Parameterized Constructor from the Demon Class
Cyberdemon::Cyberdemon(int newStrength, int newHP) : Demon(newStrength, newHP)
{
}

//Returns the characters species
string Cyberdemon::getSpecies()
{
	return "Cyberdemon";
}

//Returns the characters damage
int Cyberdemon::getDamage()
{
	int damage = (rand() % 100) + 1;

	cout << getSpecies() << " attacks for " << damage << " points!" << endl;

	if (damage <= 5)
	{
		damage = damage + 50;

		cout << "Demonic attack inflicts 50 damage points!" << endl;
	}

	return damage;
}