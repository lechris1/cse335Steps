/**
* \file Animal.h
*
* \author Christopher Le
*
* Class that describes an animal.
*/

#pragma once

/**
* Describes a single animal.
*/
class CAnimal
{
public:
	CAnimal();
	virtual ~CAnimal();

	/** Display an animal. */
	virtual void DisplayAnimal() {};
	virtual int NumEyes();
};

