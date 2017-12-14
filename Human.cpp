#include "stdafx.h"
#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

//Default Constructor inheriting from the Creature Constructor
Human::Human() : Creature()
{
}

//Inheriting the Parameterized Constructor from the Creature Class
Human::Human(int newStrength, int newHP) : Creature(newStrength, newHP)
{
}

//Returns the characters species
string Human::getSpecies()
{
	return "Human";
}

//Returns the characters damage
int Human::getDamage()
{
	int damage = (rand() % 100) + 1;

	cout << getSpecies() << " attacks for " << damage << " points!" << endl;

	return damage;
}
