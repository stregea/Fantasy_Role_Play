#pragma once
#ifndef ELF_H
#define ELF_H
#include "Creature.h"
#include <string>

//Inheriting from the Creature class
class Elf : public Creature
{
	
public:
	Elf();
	Elf(int newStrength, int newHP);

	int getDamage();

	string getSpecies();

};

#endif // !ELF_H
