#pragma once
#ifndef BALROG_H
#define BALROG_H
#include "Demon.h"

class Balrog : public Demon
{
public:
	
	Balrog();

	Balrog(int newStrength, int newHP);

	int getDamage();

	string getSpecies();
};

#endif // !BALROG_H
