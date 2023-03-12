/*************************************************************************
Cuyamaca College CS-181
File name: Lab4Exercise4.cpp
Description: Lab 04, Exercise 4, Shipping Charges, Write a program that asks for the weight of the package and the distance it is to be shipped, then displays the charges. 


Developer: Devon Ellison
*************************************************************************/


/*
-------- Shipping Rates --------
2kg or less = $1.10 per 500 miles shipped
Over 2kg but not mare than 6kg = $2.20 per 500 miles shipped
Over 6kg but not mare than 10kg = $3.70 per 500 miles shipped
Over 10kg but not mare than 20kg = $4.80 per 500 miles shipped
*/


#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double weight, distance, preCost, cost, shippingCharge, rateOne, rateTwo, rateThree, rateFour;


    //ask how heavy package is in kgs and how far you want to deliver
    cout << "How heavy is your package in kilograms? (Max 20kgs): ";
    cin >> weight;
    cout << "How many miles is your distance? (Minimum 10 miles, Maximum 3000 miles): ";
    cin >> distance;


    rateOne = 1.10 + (int((distance - 1) / 500) * 1.10);
    rateTwo = 2.20 + (int((distance - 1) / 500) * 2.20);
    rateThree = 3.70 + (int((distance - 1) / 500) * 3.70);
    rateFour = 4.80 + (int((distance - 1) / 500) * 4.80);



    //setting a console output here so I don't have to include the setprecision in the if statement
    cout << "With a weight of " << setprecision(2) << fixed << weight << " and a distance of " << distance << endl;

    //deciding what math and output to use depending on user input
    //checking if weight and distance meets the minimum or goes over the maximum guidlines
    if (weight <= 0 || distance < 10)
    {
        cout << "Invalid Input, below company Minimum ";
    }
    else if (weight > 20 || distance > 3000)
    {
        cout << "Invalid Input, above company Maximum";
    }
    else if (weight <= 2)
    {
        cost = rateOne;
        cout << "Your total is $" << cost;
    }
    else if (weight > 2 && weight <= 6)
    {
        cost = rateTwo;
        cout << "Your total is $" << cost;
    }
    else if (weight > 6 && weight <= 10)
    {
        cost = rateThree;
        cout << "Your total is $" << cost;
    }
    else if (weight > 10 && weight <= 20)
    {
        cost = rateFour;
        cout << "Your total is $" << cost;
    }
    


    return 0;
}



