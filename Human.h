#pragma once
#ifndef HUMAN_H
#define HUMAN_H
#include "Creature.h"

class Human : public Creature
{
public:
	Human();
	Human(int newStrength, int newHP);

	string getSpecies();
	int getDamage();
};

#endif // !HUMAN_H
