/*
Author: Tom Zielinski
Date: 01/17/2020
Program: Zodiac signs
Program Description: a program that prompts the user for their birthday and prints out their zodiac sign
*/

#include "iostream"
#include "string"
#include "windows.h" // For colours, Beep(), and Sleep()

using namespace std;

// Program execution begins and ends here.
int main()
{

	system("title Astrological Zodiac Signs - Tom Zielinski");

	int month, day, date;

	// Zodiac Signs
	const string aries = R"(
======================
Aries
======================
 .-.   .-.
(_  \ /  _)
     |
     |
)";

	const string taurus = R"(
======================
Taurus
======================
 .     .
 '.___.'
 .'   '.
:       :
:       :
 '.___.'
)";

	const string gemini = R"(
======================
Gemini
======================
._____.
  | |
  | |
 _|_|_
'     '
)";

	const string cancer = R"(
======================
Cancer
======================
   .--.
  /   _'.
 (_) ( )
'.    /
  '--'
)";

	const string leo = R"(
======================
Leo
======================
  .--.
 (    )
(_)  /
    (_.
)";

	const string virgo = R"(
======================
Virgo
======================
 _
' ':--.--.
   |  |  |_
   |  |  | )
   |  |  |/
        (J
)";

	const string libra = R"(
======================
Libra
======================
     __
___.'  '.___
____________
)";

	const string scorpio = R"(
======================
Scorpio
======================
 _
' ':--.--.
   |  |  |
   |  |  |
   |  |  |  ...
         '---':
)";

	const string sagittarius = R"(
======================
Sagittarius
======================
      ...
      .':
    .'
'..'
.''.
)";

	const string capricorn = R"(
======================
Capricorn
======================
        _
\      /_)
 \    /'.
  \  /   :
   \/ __.'
)";

	const string aquarius = R"(
======================
Aquarius
======================
.-"-._.-"-._.-
.-"-._.-"-._.-
)";

	const string pisces = R"(
======================
Pisces
======================
'-.    .-'
   :  :
 --:--:--
   :  :
.-'    '-.
)";

	string banner = R"(
=============================
= Astrological Zodiac Signs =
=============================
)";

	//display banner
	cout << banner << "This program will tell you your Astrological Zodiac Signs based on your birthday\n\n";

	//prompt user to enter their birthday
	cout << "\nEnter you Birthday (month day)";
	cin >> month >> day;

	//calculate the day, to compare to zodiac days
	date = (month * 100) + day;

	system("cls");

	cout << banner;

	printf("\nYour Astrological Zodiac Sign base on your birthday (%i/%i)\n", month, day);
	
	//compare birthday to zodiac sign dates
	//jan - feb aquarius
	if (date >= 1 * 100 + 20 && date <= 2 * 100 + 18) {
		cout << aquarius;
	}
	//feb - mar pisces
	else if (date >= 2 * 100 + 19 && date <= 3 * 100 + 20)
	{
		cout << pisces;
	}
	//mar - apr Aries
	else if (date >= 3 * 100 + 21 && date <= 4 * 100 + 19) 
	{
		cout << aries;
	}
	//apr - may taurus
	else if (date >= 4 * 100 + 20 && date <= 5 * 100 + 20)
	{
		cout << taurus;
	}
	//may - jun Gemini
	else if (date >= 4 * 100 + 21 && date <= 5 * 100 + 20)
	{
		cout << gemini;
	}
	//jun - jul cancer
	else if (date >= 6 * 100 + 21 && date <= 7 * 100 + 22)
	{
		cout << cancer;
	}
	//jul - aug Leo
	else if (date >= 7 * 100 + 23 && date <= 8 * 100 + 22)
	{
		cout << leo;
	}
	//aug - sep virgo
	else if (date >= 8 * 100 + 23 && date <= 9 * 100 + 22)
	{
		cout << virgo;
	}
	//sep - oct libra
	else if (date >= 9 * 100 + 23 && date <= 10 * 100 + 22)
	{
		cout << libra;
	}
	//oct - nov scorpio
	else if (date >= 10 * 100 + 23 && date <= 11 * 100 + 21)
	{
		cout << scorpio;
	}
	//nov - dec sagittarius
	else if (date >= 11 * 100 + 22 && date <= 12 * 100 + 21)
	{
		cout << sagittarius;
	}
	//dec - jan Capricorn
	else if (date >= 12 * 100 + 22 && date <= 12 * 100 + 31 || date >= 1 * 100 + 0 && date <= 1 * 100 + 19)
	{
		cout << capricorn;
	}
	//user input is invalid
	else 
	{
		cout << "Error - Invalid date";
	}

	// Press any key to continue . . .
	system("pause");
	// Main() needs to return an int
	return 0; // 0 means normal program exit
}
