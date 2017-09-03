/**
* \file Chicken.h
*
* \author Christopher Le
*
* Class that describes a chicken.
*/

#pragma once

#include <string>
#include "Animal.h"

/**
* Describes a single chicken.
*/
class CChicken : public CAnimal
{
public:
	CChicken();
	virtual ~CChicken();

	void ObtainChickenInformation();
	void DisplayAnimal();
	int NumEyes();

private:
	//! The chicken's ID
	std::string mId;
};