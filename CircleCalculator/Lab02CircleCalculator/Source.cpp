
/*
Author: Tom Zielinski
Date: 0/2020
Program: circle calculator
Program Description: prompt the user to enter the radius of a circle, then
calculate and display the entered radius, the calculated diameter, circumference, and area
*/

#include "iostream"
#include "string"
#include "windows.h" // For colours, Beep(), and Sleep()

using namespace std;

// Program execution begins and ends here.
int main()
{
	//constant variable
	const double PIE = 3.1415;

	system("title Circle Calculator - Tom Zielinski");

	//variables
	float radius;
	float diameter, circumfrence, area;
	bool isInvalid;

	//banners
	string banner1 = R"(
=====================
= Circle Calculator =
=====================
)";

	string banner2 = R"(
=======================
= Circle Calculations =
=======================
)";

	cout << banner1 << "A Program that Calculates the diameter, circumfrene and area of a circle, given its radius\n";

	

	do // Ask for the user's age until getting a valid input
	{
		cout << "Enter radius: ";
		// Will try to convert input
		cin >> radius;
		// Validation – Failed to assign a numeric value to the variable? (true/false)
		isInvalid = cin.fail();
		cin.clear(); // clear the fail state of cin
		// Error message in case input is invalid
		if (isInvalid) {
			cout << "Error - Input must be numeric.\n\n";
		}
		else if (radius <= 0)
		{
			cout << "Error - Input must be greater than 0.\n\n";
			isInvalid = true;
		}
		// Ignore leftover input until newline [enter]
		cin.ignore(256, '\n'); // 256 is how many chars to ignore
	} while (isInvalid);

	system("cls");

	cout << banner2;

	//calculate diameter
	diameter = 2 * radius;

	//calculate circumfrence
	circumfrence = 2 * PIE * radius;

	//calculate area
	area = PIE * radius * radius;

	printf("Radius: %.1f\nDiameter: %.1f\nCircumfrence: %.1f\nArea: %.1f\n\n", radius, diameter, circumfrence, area);

	// Press any key to continue . . .
	system("pause");
	// Main() needs to return an int
	return 0; // 0 means normal program exit
}
