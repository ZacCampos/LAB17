/*******************************************************************************
 * AUTHORS		: Zac Campos & Bas Beeuwsaert
 * STUDENT ID	: 1058476
 * LAB #17		: Flo's Party Planner
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 3/26/18
 ******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*******************************************************************************
 * ECLIPSE TUTORIAL
 * -----------------------------------------------------------------------------
 * This program will output the class heading
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<There is no input for this program - output data is obtained through
 * 		the constants.>
 *
 * OUTPUT:
 * 	<This program will output a class heading>
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMERS		: Programmers' Names
	 * CLASS			: Students' Course
	 * SECTION			: Class Days and Times
	 * LAB_NUM			: Lab Number (specific to this lab)
	 * LAB_NAME			: Title of the Lab
	 * NAME_SIZE		: Space given for taking in each name.
	 * PROMPT_COL		: Align the user input.
	 * SNACK_CSTRING	: Size given to store the name of each snack.
	 * BEV_CTRING		: Size given to store the name of each beverage.
	 * BEVERAGE_COL		: Aligns the beverage output.
	 * PURCHASE_ COL	: Aligns the amount of each item that must be purchased.
	 * DRINKS_PER_PERSON: Used for the amount of drinks each guest gets.
	 **************************************************************************/

	const char PROGRAMMER[]		= "Zac Campos & Bas Beeuwsaert";
	const char CLASS[]			= "CS1A";
	const char SECTION[]		= "MW: 8am";
	const int  LAB_NUM			= 17;
	const char LAB_NAME[]		= "Flo's Party Planner";
	const int NAME_SIZE			= 25;
	const int PROMPT_COL		= 30;
	const int SNACK_CSTRING		= 20;
	const int BEV_CSTRING		= 15;
	const int BEVERAGE_COL		= 3;
	const int PURCHASE_COL		= 9;
	const int DRINKS_PER_PERSON = 3;

	// Program Variables
	char name[NAME_SIZE];		  // In & Out  - used to store friend's name.
	int  age 			= 0;	  // In & Calc - used to determine beverage.
	int  guestCount 	= 0;	  // Output	   - identifies each guest.
	char chocChoice;			  // In & Calc - used to determine snack.
	char nutChoice;				  // In & Calc - used to determine snack
	char peanut[SNACK_CSTRING];	  // Out	   - used to display snack served.
	char mnm[SNACK_CSTRING];	  // Out	   - used to display snack served.
	char skittles[SNACK_CSTRING]; // Out	   - used to display snack served.
	char juice[BEV_CSTRING];	  // Out	   - used to display drink served.
	char soda[BEV_CSTRING];		  // Out	   - used to display drink served.
	char wine[BEV_CSTRING];		  // Out	   - used to display drink served.
	int  peanutCount 	 = 0;	  // Calc & Out- used to increment peanuts.
	int  mnmCount	 	 = 0;	  // Calc & Out- used to increment M&M's.
	int  skittleCount 	 = 0;	  // Calc & Out- used to increment skittles.
	int  juiceCount 	 = 0;	  // Calc & Out- used to increment juice.
	int  sodaCount  	 = 0;	  // Calc & Out- used to increment soda.
	int  wineCount  	 = 0;	  // Calc & Out- used to increment wine.
	int  skittleBagCount = 0;	  // Calc & Out- used to calculate bags needed.
	int  peanutBagCount  = 0;	  // Calc & Out- used to calculate bags needed.
	int  mnmBagCount 	 = 0;	  // Calc & Out- used to calculate bags needed.
	int  juiceCaseCount  = 0;	  // Calc & Out- used to calculate cases needed.
	int  sodaCaseCount   = 0;	  // Calc & Out- used to calculate cases needed.
	int  wineCaseCount   = 0;	  // Calc & Out- used to calculate cases needed.

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)	<< LAB_NUM		<< ": "	<< LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	strncpy(peanut, "Peanut M & M\'s", SNACK_CSTRING);
	strncpy(mnm, "M & M\'s", SNACK_CSTRING);
	strncpy(skittles, "Skittles", SNACK_CSTRING);
	strncpy(juice, " and juice.", BEV_CSTRING);
	strncpy(soda, " and soda.", BEV_CSTRING);
	strncpy(wine, " and wine.", BEV_CSTRING);

	for(guestCount = 1; guestCount <= 12; guestCount = guestCount + 1)
	{
	/***************************************************************************
	 * INPUT - Takes in the friends information and preferences.
	 **************************************************************************/
		cout << left;
		cout << "Guest #" << guestCount << ":" << endl;

		cout << setw(PROMPT_COL) << "What is your friend\'s name?";
		cin.getline (name, 25);

		cout << setw(PROMPT_COL) << "How old is your friend?";
		cin  >> age;
		cin.ignore(10000, '\n');

		cout << setw(PROMPT_COL) << "Do they like chocolate (Y/N)?";
		cin.get(chocChoice);
		chocChoice = toupper(chocChoice);
		cin.ignore(10000, '\n');

		if(chocChoice == 'Y')
		{
			cout << setw(PROMPT_COL) << "Do they like nuts (Y/N)?";
			cin.get(nutChoice);
			nutChoice = toupper(nutChoice);
			cin.ignore(10000, '\n');
		}
		cout << endl;
		cout << right;


	/***************************************************************************
	 * PROCESSING & OUTPUT - Determines what snacks and beverages should be
	 * 							served while incrementing each one.
	 **************************************************************************/
		cout << "You should serve " << name << " ";

		if(chocChoice == 'Y')
		{
			if(nutChoice == 'Y')
			{
				cout << peanut;
				peanutCount = peanutCount + 1;
			}
			else
			{
				cout << mnm;
				mnmCount = mnmCount + 1;
			}
		}
		else
		{
			cout << skittles;
			skittleCount = skittleCount + 1;
		}


		if(age <= 5)
		{
			cout << juice;
			juiceCount = juiceCount + 1;
		}
		else
		{
			if(age <= 20)
			{
				cout << soda;
				sodaCount = sodaCount + 1;
			}
			else
			{
				cout << wine;
				wineCount = wineCount + 1;
			}
		}

		cout << endl << endl << endl;
	}

    skittleBagCount = skittleCount / 4;

    if(skittleCount % 4 > 0)
    {
    	skittleBagCount = skittleBagCount + 1;
    }


    peanutBagCount = peanutCount / 4;

    if(peanutCount % 4 > 0)
    {
    	peanutBagCount = peanutBagCount + 1;
    }


    mnmBagCount = mnmCount / 4;

    if(mnmCount % 4 > 0)
    {
       	mnmBagCount = mnmBagCount + 1;
    }

    juiceCount = juiceCount * DRINKS_PER_PERSON;

    juiceCaseCount = juiceCount / 6;

    if(juiceCount % 6 > 0)
    {
       	juiceCaseCount = juiceCaseCount + 1;
    }

    sodaCount = sodaCount * DRINKS_PER_PERSON;

    sodaCaseCount = sodaCount / 6;

    if(sodaCount % 6 > 0)
    {
    	sodaCaseCount = sodaCaseCount + 1;
    }

    wineCount = wineCount * DRINKS_PER_PERSON;

    wineCaseCount = wineCount / 6;

    if(wineCount % 6 > 0)
    {
    	wineCaseCount = wineCaseCount + 1;
    }



	/***************************************************************************
	 * OUTPUT - Outputs the amount of servings and bags needed to be able
	 * 			to serve the guests.
	 **************************************************************************/
	cout << left;
	cout << endl << endl;
	cout << "There are:" << endl;

	// Skittles
	cout << skittleCount << " ";
	if(skittleCount == 0)
	{
		cout << "serving";
	}
	else
	{
		cout << "servings";
	}
	cout << " of " << skittles << endl;

	// MnM
	cout << mnmCount << " ";
	if(mnmCount == 0)
	{
		cout << "serving";
	}
	else
	{
		cout << "servings";
	}
	cout << " of " << mnm << endl;

	// Peanut MnM
	cout << peanutCount << " ";
	if(peanutCount == 0)
	{
		cout << "serving";
	}
	else
	{
		cout << "servings";
	}
	cout << " of " << peanut << endl;

	cout << endl;

	// Soda
	cout << setw(BEVERAGE_COL) << sodaCount;
	if(sodaCount == 0)
	{
		cout << "serving";
	}
	else
	{
		cout << "servings";
	}
	cout << " of" << soda << endl;

	// Juice
	cout << setw(BEVERAGE_COL) << juiceCount;
	if(juiceCount == 0)
	{
		cout << "serving";
	}
	else
	{
		cout << "servings";
	}
	cout << " of" << juice << endl;

	// Wine
	cout << setw(BEVERAGE_COL) << wineCount;
	if(wineCount == 0)
	{
		cout << "serving";
	}
	else
	{
		cout << "servings";
	}
	cout << " of" << wine;
	cout << endl << endl << endl;

	cout << "Florence needs to purchase:" << endl;
	cout << setw(PURCHASE_COL) << "BAGS" << "SNACK" << endl;
	cout << setw(PURCHASE_COL) << "----" << "-----" << endl;
	cout << setw(PURCHASE_COL) << skittleBagCount << "Skittles" << endl;
	cout << setw(PURCHASE_COL) << mnmBagCount << "M & M\'s" << endl;
	cout << setw(PURCHASE_COL) << peanutBagCount << "Peanut M & M\'s" << endl;

	cout << endl;

	cout << setw(PURCHASE_COL) << "CASES" << "BEVERAGE" << endl;
	cout << setw(PURCHASE_COL) << "-----" << "--------" << endl;
	cout << setw(PURCHASE_COL) << juiceCaseCount << "Juice" << endl;
	cout << setw(PURCHASE_COL) << sodaCaseCount << "Soda" << endl;
	cout << setw(PURCHASE_COL) << wineCaseCount << "Wine" << endl;
	cout << right;



	return 0;
}


