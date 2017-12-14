/**
*
*	Name: Samuel Tregea
*
*	Professor: Jeffrey Howard
*
*	Date: 12-12-17
**/

#include "stdafx.h"
#include "Creature.h"
#include "Demon.h"
#include "Balrog.h"
#include "Cyberdemon.h"
#include "Elf.h"
#include "Human.h"
#include <iostream>

using namespace std;
void introMessage();

int main()
{
	introMessage();
	Balrog balrog(10, 10);
	Cyberdemon cyberdemon(10, 10);
	Elf elf(10, 10);
	Human human(10, 10);

	char ans;

	do
	{
		cout << endl;
		balrog.getDamage();
		cout << endl;
		human.getDamage();
		cout << endl;
		cyberdemon.getDamage();
		cout << endl;
		elf.getDamage();
		cout << endl;

		cout << "Battle another round? y/n" << endl;
		cin >> ans;

	} while (ans == 'y' || ans == 'Y');

	cout << "\nThanks for playing!\n" << endl;

	return 0;
}

void introMessage()
{
	cout << "This program simulates turn-based battle between Demons and Hero's. Balrog's + Cyberdemons vs Humans + Elves!" << endl;
	cout << "All Characters have infinite health, so attack as much as you want!\n" << endl;
}