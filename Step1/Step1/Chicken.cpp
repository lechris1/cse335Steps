/**
* \file Chicken.cpp
*
* \author Enter_your_name_here
*/

#include "stdafx.h"
#include <iostream>
#include "Chicken.h"

using namespace std;

/** Chicken object constructor.
*/
CChicken::CChicken()
{

}

/** Destructor.
*/
CChicken::~CChicken()
{

}

/** Obtain a chicken description from the user.
*/
void CChicken::ObtainChickenInformation()
{
	cout << endl;
	cout << "Input information about the chicken" << endl;

	// Obtain the ID. This is easy, since it's just a
	// string.
	cout << "Id: ";
	cin >> mId;
}

/** Display the chicken.
*/
void CChicken::DisplayAnimal()
{
	cout << "Chicken: " << mId << endl;
}

/** Obtain the number of eyes for a chicken.
*
* \returns 2
*/
int CChicken::NumEyes()
{
	int numberOfEyes = 2;
	return numberOfEyes;
}