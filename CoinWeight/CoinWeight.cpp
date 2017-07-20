// CoinWeight.cpp : Defines the entry point for the console application.

/*Allow the user to input the total weight of each type of coin they have 
(pennies, nickels, dimes, and quarters).
Print out how many of each type of coin wrapper they would need, how many coins they have,
and the estimated total value of all of their money.
Subgoals:
Round all numbers printed out to the nearest whole number.
Allow the user to select whether they want to submit the weight in either grams or pounds.
*/
#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
void pennyWrappers(float pWeight );
void dimeWrappers(float  dWeight);
void quarterWrappers(float qWeight);
void nickelWrappers(float nWeight);


int main()
{
	float pennies, nickels, dimes, quarters;// creating variable to hold the total weight of coins each type.

	cout << "\t\t**Coin Wrapper Estimator**"<< endl;//Title for application.
	cout << "\n*Next you will enter the total weight for each coin you need wrappers for.*" << endl;// Letting user know what is bout to happen.
	
	 /*Asking user to input total weight for each coin*/

	cout << "\nPlease enter weight of all your pennies: ";
	cin >> pennies;
	cin.ignore();
	cout << "\nPlease enter weight of all your nickels: ";
	cin >> nickels;
	cin.ignore();
	cout << "\nPlease enter weight of all your dimes: ";
	cin >> dimes;
	cin.ignore();
	cout << "\nPlease enter weight of all your quarters: ";
	cin >> quarters;
	cin.ignore();

	/*Calling function to calculate wrappers needed for each coin type.*/

	pennyWrappers(pennies);
	nickelWrappers(nickels);
	dimeWrappers(dimes);
	quarterWrappers(quarters);

	system("pause");
    return 0;
}

void pennyWrappers(float pWeight)
{
	int numPennies = pWeight / 2.50;
	int numWrappers=0;

	while (numPennies >= 50)
	{
		numWrappers++;
		numPennies -= 50;
	}
	cout << "You need " << numWrappers << "  wrapper(s) for your pennies."<<endl;
}
void nickelWrappers(float nWeight)
{
	int numNickels = nWeight / 5;
	int numWrappers = 0;

	while (numNickels >= 40)
	{
		numWrappers++;
		numNickels -= 40;
	}

	cout << "You need " << numWrappers << " wrapper(s) for your nickels."<<endl;
}
void dimeWrappers(float dWeight)
{
	int numDimes = dWeight / 2.27;
	int numWrappers = 0;

	while (numDimes >=40)
	{
		numWrappers++;
		numDimes -= 40;
	}
	cout << "You need " << numWrappers << " wrapper(s) for your dimes."<<endl;
}
void quarterWrappers(float qWeight)
{
	int numQuarters = qWeight / 2.27;
	int numWrappers = 0;

	while (numQuarters >= 50)
	{
		numWrappers++;
		numQuarters -= 50;
	}
	cout << "You need " << numWrappers << " wrapper(s) for your quarters."<<endl;
}