/*************************************************************************
Cuyamaca College CS-181
File name: Lab4Exercise3.cpp
Description: Lab 04, Exercise 3, Software Sales, Write a program that asks for the number of units sold and computes the total cost of the purchase. 
Input Validation: Make sure the number of units is greater than 0. 


Developer: Devon Ellison
*************************************************************************/





/*
Discounts:
10-19: 20%
20-49: 30%
50-99: 40%
100 or more: 50%
*/


#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
 
    float cost, number, twentyOff, thirtyOff, fourtyOff, fiftyOff, total;

    cout << "This program is intended to calculate the number of units sold and computes the total cost of the purchase ";
    cout << "How many packages sold? (Only enter a number above 0):  ";
    cin >> number;


    cost = 99;
    total = number * cost;
    twentyOff = total * .80;
    thirtyOff = total * .70;
    fourtyOff = total * .60;
    fiftyOff = total * .50;



    cout << "Your Pretotal is " << setprecision(2) << fixed << total << endl;

    if (number <= 0)
    {
        cout << "Invalid Input" << endl;
    }
    else if (number < 10)
    { 
        cout << "No discount applies" << endl;
        cout << "Your total is $" << total;
    }
    else if (number >= 10 && number <= 19)
    {
        cout << "Your total after a 20% discount is $" << twentyOff;
    }
    else if (number >= 20 && number <= 49)
    {
        cout << "Your total after a 30% discount is $" << thirtyOff;
    }
    else if (number >= 50 && number <= 99)
    {
        cout << "Your total after a 40% discount is $" << fourtyOff;
    }
    else if (number >= 100)
    {
        cout << "Your total after a 50% discount is $" << fiftyOff;
    }


        return 0;
}


