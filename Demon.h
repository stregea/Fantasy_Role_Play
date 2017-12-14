#pragma once
#ifndef DEMON_H
#define DEMON_H
#include "Creature.h"

class Demon : public Creature
{
public:
	Demon();
	Demon(int newStrength, int newHP);

	int getDamage();

	string getSpecies();
	
};

#endif // !DEMON_H

