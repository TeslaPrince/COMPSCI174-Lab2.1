// lab2.1_lambertjenna.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int ONE_FOOT = 12;
	int given;
	int feet;
	int inches;
	cout << setprecision(0) << fixed;
	cout << "How tall are you in inches? ";
	cin >> given;
	feet = given / ONE_FOOT;
	inches = given % ONE_FOOT;
	cout << "your heaight " << given << " inches is equal to " << feet << " feet and " << inches << " inches.";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
