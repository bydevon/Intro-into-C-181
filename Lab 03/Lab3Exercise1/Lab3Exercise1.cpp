/*************************************************************************
Cuyamaca College CS-181
File name: Lab3Exercise1.cpp
Description: Lab 3, Exercise 1, Write a program that asks how many tickets for each class of seats were sold, then displays the amount of 
revenue generated from each seating class and total ticket sales
Developer: Devon Ellison
*************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	// Constants
	const double priceA = 20.00;
	const double priceB = 15.00;
	const double priceC = 10.00;

	// Variables
	double classASeats, classBSeats, classCSeats;
	double total;

		cout << "How many class A seats sold: ";
		cin >> classASeats;

		cout << "How many class B seats sold: ";
		cin >> classBSeats;

		cout << "How many class C seats sold: ";
		cin >> classCSeats;

	double classASeatsTotal = classASeats * priceA;
	double classBSeatsTotal = classBSeats * priceB;
	double classCSeatsTotal = classCSeats * priceC;
	total = classASeatsTotal + classBSeatsTotal + classCSeatsTotal;

		cout << "Class A generated: " << setprecision(2) << fixed << classASeatsTotal << endl;
		cout << "Class B generated: " << setprecision(2) << fixed << classBSeatsTotal << endl;
		cout << "Class C generated: " << setprecision(2) << fixed << classCSeatsTotal << endl;
		cout << "Total amount generated: " << setprecision(2) << fixed << total << endl;

		return 0;
}

