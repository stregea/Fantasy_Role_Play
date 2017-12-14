#include "stdafx.h"
#include "Elf.h"
#include <iostream>
#include <string>

using namespace std;

//Default Constructor inheriting from the Creature Constructor
Elf::Elf() : Creature()
{

}

//Inheriting the Parameterized Constructor from the Creature Class
Elf::Elf(int newStrength, int newHP) : Creature(newStrength, newHP)
{

}

//Returns the characters damage
int Elf::getDamage()
{
	int damage = (rand() % 100) + 1;

	cout << getSpecies() << " attacks for " << damage << " points!" << endl;

	if (rand() % 100 == 0)
	{
		damage = damage * 2;
		cout << "Magical attack inflicts " << damage << " additional damage" << endl;
	}

	return damage;
}

//Returns the characters species
string Elf::getSpecies()
{
	return "Elf";
}
