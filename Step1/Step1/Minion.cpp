/**
* \file Cow.cpp
*
* \author Christopher Le
*/

#include "stdafx.h"
#include <iostream>
#include "Minion.h"

using namespace std;

/**
* Constructor
*/
CMinion::CMinion()
{
}

/**
* Destructor
*/
CMinion::~CMinion()
{
}

/** Obtain information from the user about this minion.
*
* Asks the user for the information that describes a minion.
*/
void CMinion::ObtainMinionInformation()
{
	cout << endl;
	cout << "Input information about the minion" << endl;

	// Obtain the name.
	cout << "Name: ";
	cin >> mName;

	// Obtain the weight.
	bool valid = false;
	while (!valid)
	{
		cout << "Weight in kilograms: ";
		double weight;
		cin >> weight;
		if (!cin)
		{
			// We have an error. Clear the input and try again
			cin.clear();
			cin.ignore();
			continue;
		}
		mWeight = weight;
		valid = true;
	}

	//Obtain their favorite fruit.
	cout << "Favorite Fruit: ";
	cin >> mFaveFruit;

	//Obtain number of eyes.
	valid = false;
	while (!valid)
	{
		cout << "Number of Eyes (1 or 2): ";
		int eyes;
		cin >> eyes;
		if (!cin)
		{
			// We have an error. Clear the input and try again
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (eyes)
		{
		case 1:
			mNumOfEyes = eyes;
			valid = true;
			break;

		case 2:
			mNumOfEyes = eyes;
			valid = true;
			break;
		}
	}
}

/**
* Display information about this minion.
*/
void CMinion::DisplayAnimal()
{
	cout << mName << ": " << endl;
	cout << "\t Weight: " << mWeight << " kg" << endl;
	cout << "\t Favorite Fruit: " << mFaveFruit << endl;
	cout << "\t Number of Eyes: " << mNumOfEyes << endl;
}

/** Obtain the number of eyes for a minion.
*
* \returns their number of eyes
*/
int CMinion::NumEyes()
{
	return mNumOfEyes;
}
