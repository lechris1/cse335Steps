/**
* \file Animal.cpp
*
* \author Christopher Le
*/

#include "stdafx.h"
#include "Animal.h"

/**
* CFarm constructor
*/
CAnimal::CAnimal()
{
}

/**
* CFarm destructor
*/
CAnimal::~CAnimal()
{
}

/** Obtain the number of eyes for an animal.
*
* \returns 2
*/
int CAnimal::NumEyes()
{
	const int NumberOfEyes = 2;
	return NumberOfEyes;
}
