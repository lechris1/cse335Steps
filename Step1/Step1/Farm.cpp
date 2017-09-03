/**
* \file Farm.cpp
*
* \author Christopher Le
*/

#include "stdafx.h"
#include "Farm.h"


/**
* Constructor.
*/
CFarm::CFarm()
{
}


/**
* CFarm destructor
*/
CFarm::~CFarm()
{
	// Iterate over all of the animals, destroying 
	// each one.
	for (auto animal : mInventory)
	{
		delete animal;
	}

	// And clear the list
	mInventory.clear();
}

/** Add an animal to the farm inventory.
*
* \param cow A cow to add to the inventory
*/
void CFarm::AddAnimal(CAnimal *animal)
{
	mInventory.push_back(animal);
}

/**
* Display the farm inventory.
*/
void CFarm::DisplayInventory()
{
	for (auto animal : mInventory)
	{
		animal->DisplayAnimal();
	}

}

/** Obtain the number of eyes in the farm.
*
* Cows and chickens have 2 eyes. Minions have either 1 or 2 eyes.
*
* \returns total number of eyes.
*/
int CFarm::CountEyes()
{
	int totalEyes = 0;
	for (auto animal : mInventory)
	{
		totalEyes += animal->NumEyes();
	}
	return totalEyes;
}