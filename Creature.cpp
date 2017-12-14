#include "stdafx.h"
#include <iostream>
#include "Creature.h"

using namespace std;

//Default Constructor
Creature::Creature()
{
	strength = 10;
	hp = 10;
}

//Constructor that sets the values
Creature::Creature(int newStrength, int newHP)
{
	strength = newStrength;
	hp = newHP;
}

//Sets the strength
void Creature::setStrength(int newStrength)
{
	strength = newStrength;
}

//Sets the HitPoints
void Creature::setHP(int newHP)
{
	hp = newHP;
}

//returns the strength
int Creature::getStrength()
{
	return strength;
}

//Returns the hitpoints
int Creature::getHP()
{
	return hp;
}

//Displays the damage dealt
int Creature::getDamage()
{
	int damage = (rand() % strength) + 1;

	cout << " attacks for " << damage << " points!" << endl;

	return damage;
}

string Creature::getSpecies()
{
	return "Creature";
}