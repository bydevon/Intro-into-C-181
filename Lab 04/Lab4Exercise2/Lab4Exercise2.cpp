/*************************************************************************
Cuyamaca College CS-181
File name: Lab4Exercise2.cpp
Description: Lab 04, Exercise 2, Write a program that calculates and displays a person’s body mass index (BMI). The BMI is often used to determine whether a 
person is overweight or underweight for his or her height.

Developer: Devon Ellison
*************************************************************************/

/*
A person’s BMI is calculated with the following formula:

BMI = weight * 703/height2

where weight is measured in pounds and height is measured in inches. The program should display a message based on the
following ranges:

*/




#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
   
	double weight;
	double height;
	double bmi;

	cout << "Input your weight in pounds: ";
	cin >> weight;

	cout << "Input your height in inches: ";
	cin >> height;

	bmi = (weight * 703) / pow(height , 2);


	cout << setprecision(2) << fixed << "Your total bmi is " << bmi << endl;

	if (bmi < 18.5)
	{
		cout << "You are Underweight: BMI is less than 18.5 " << endl;
	}
	else if (bmi >= 18.5 && bmi <= 24.9)
	{
		cout << "You are Normal weight : BMI is 18.5 to 24.9 " << endl;
	}
	else if (bmi >= 25 && bmi <= 29.9)
	{
		cout << "You are Overweight : BMI is 25 to 29.9 " << endl;
	}
	else if (bmi >= 30)
	{
		cout << "You are Obese : BMI is 30 or more " << endl;
	}

	return 0;
}





