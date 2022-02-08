// Freezing and Boiling Points.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Declare variables to store values for freezing points, boiling points, and user-inputted temperature in fahrenheit
	char reply = 'n';
	const int freezingEthylAlcohol = -173, boilingEthylAlcohol = 172, freezingMercury = -38, boilingMercury = 676, freezingOxygen = -362, boilingOxygen = -306, freezingWater = 32, boilingWater = 212;
	double temperature = -20;

	// Program information and example
	cout << "This program compares the temperature in fahrenheit that the user enters,\n"
		 << "compares it with the following table, and shows all the substances that will\n"
		 << "freeze and boil at that temperature.\n\n"

		 << "----------------------------------------------------------\n"
		 << "Substance         Freezing Point (F)     Boiling Point (F)\n"
		 << "----------------------------------------------------------\n"
		 << "Ethyl Alcohol            -173                   172\n"
		 << "Mercury                  -38                    676\n"
		 << "Oxygen                   -362                  -306\n"
		 << "Water                     32                    212\n"
		 << "----------------------------------------------------------\n\n"

		 << "For example, if the user enters " << temperature << ", then the program will report:\n\n"
		 << "Ethyl Alcohol: No Change\n"
		 << "Mercury:       No Change\n"
		 << "Oxygen:        Boils\n"
		 << "Water:         Freezes\n\n"

	// Ask the user if he or she wants to enter information.
		 << "This program requires a temperature in fahrenheit. Would you like to enter a\n"
		 << "temperature? (y/n) ";
	cin >> reply;

	if (reply == 'y' || reply == 'Y')
	{
		// Clear the screen for calculation
		system("cls");

		// Input information
		cout << "Enter the temperature in fahrenheit: ";
		cin >> temperature;
		cout << endl;

		// Outputs data
		if (temperature <= freezingEthylAlcohol)
			cout << "Ethyl Alcohol: Freezes\n";
		else if (temperature > freezingEthylAlcohol && temperature < boilingEthylAlcohol)
			cout << "Ethyl Alcohol: No Change\n";
		else if (temperature >= boilingEthylAlcohol)
			cout << "Ethyl Alcohol: Boils\n";
		
		if (temperature <= freezingMercury)
			cout << "Mercury:       Freezes\n";
		else if (temperature > freezingMercury && temperature < boilingMercury)
			cout << "Mercury:       No Change\n";
		else if (temperature >= boilingMercury)
			cout << "Mercury:       Boils\n";

		if (temperature <= freezingOxygen)
			cout << "Oxygen:        Freezes\n";
		else if (temperature > freezingOxygen && temperature < boilingOxygen)
			cout << "Oxygen:        No Change\n";
		else if (temperature >= boilingOxygen)
			cout << "Oxygen:        Boils\n";

		if (temperature <= freezingWater)
			cout << "Water:         Freezes\n";
		else if (temperature > freezingWater && temperature < boilingWater)
			cout << "Water:         No Change\n";
		else if (temperature >= boilingWater)
			cout << "Water:         Boils\n";
	}

	cout << "\nHave a great day!\n\n";
	return 0;
}