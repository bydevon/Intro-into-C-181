/*************************************************************************
Cuyamaca College CS-181
File name: Lab3Exercise3.cpp
Description: Lab 3, Exercise 3, Write a program that prompts the user for a temperature in degrees Fahrenheit, converts the temperature to degrees Celsius, 
and displays it. Cheat: C = (F – 32) * (5.0 / 9.0)
Developer: Devon Ellison
*************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double fah;
	
	cout << "enter in the degrees in fahrenheit you would like to translate to celsius: ";
	cin >> fah;

	double cel = (fah - 32) * (5.0 / 9.0);
	cout << fah << " degrees fahrenheit translates to: " << setprecision(1) << fixed << cel << " Celsius or "<< endl;

	return 0;
}