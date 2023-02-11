/*************************************************************************
Cuyamaca College CS-181
File name: Lab2Exercise3.cpp
Description: Lab 02, Exercise 3, Write a program that computes the miles per gallon of a car that holds 15 gallons of gas and can travel 400 miles before 
refueling
named total, and displays the total.
Developer: Devon Ellison
*************************************************************************/


// My Solution

#include <iostream>
using namespace std;


int main()
{

    int gallons= 15;
    int miles = 400;

    double milesPerGallon = miles / gallons;

    cout << "Your mileage is estimated to be " << milesPerGallon << " Miles Per Gallon" << endl;
    return 0;
}

