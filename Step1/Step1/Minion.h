/**
* \file Chicken.h
*
* \author Chris Le
*
* Class that describes a minion.
*/

#pragma once

#include <string>
#include "Animal.h"

/**
* Describes a single minion.
*/
class CMinion : public CAnimal
{
public:
	CMinion();
	virtual ~CMinion();

	void ObtainMinionInformation();
	void DisplayAnimal();
	int NumEyes();

private:
	/// The minion's name.
	std::string mName;

	/// The minion's weight in kilograms.
	double mWeight = 0;

	/// The minion's favorite fruit.
	std::string mFaveFruit;

	/// The minion's number of eyes.
	int mNumOfEyes = 0;
};

