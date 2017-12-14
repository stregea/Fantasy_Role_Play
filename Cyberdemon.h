#pragma once
#ifndef CYBERDEMON_H
#define	CYBERDEMON_H
#include "Demon.h"

class Cyberdemon : public Demon
{
public:

	Cyberdemon();
	Cyberdemon(int newStrength, int newHP);

	int getDamage();

	string getSpecies();
};

#endif // !CYBERDEMON_H
