#pragma once
#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
#include <string>

using namespace std;

class Creature
{
public:
	
	Creature();
	Creature(int newStrength, int newHit);

	void setStrength(int newStrength);
	void setHP(int newHit);
	int getStrength();
	int getHP();
	int getDamage();

private:
	int strength;
	int hp;//HitPoints
	string getSpecies();
};

#endif // !CREATURE_H
