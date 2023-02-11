/*************************************************************************
Cuyamaca College CS-181
File name: Lab3Exercise2.cpp
Description: Lab 3, Exercise 4, Write a program that will convert U.S. dollar amounts to Japanese yen and to euros
Developer: Devon Ellison
*************************************************************************/

/*
Write a program that will convert U.S.dollar amounts to Japanese yenand to euros, storing the conversion factors in the
constants YEN_PER_DOLLAR and EUROS_PER_DOLLAR. Use the following exchange rates

1 Dollar = 98.93 Yen

1 Dollar = 0.74 Euros
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double dollar;
    
    // asks for the dollar amount
    cout << "Enter the amount of dollars you would like to convert: ";
    cin >> dollar;

    // conversion rates given
    double YEN_PER_DOLLAR = dollar * 98.93;
    double EUROS_PER_DOLLAR = dollar * .74;

    // I put the converted amounts line in for the setprecision to be out of the converted lines
    cout << "---------Converted Amounts---------" << setprecision(2) << fixed << endl;
    cout << dollar << " Dollars converts to: " << YEN_PER_DOLLAR << " in Yen" << endl;
    cout << dollar << " Dollars converts to: " << EUROS_PER_DOLLAR << " in Euros";
    

    return 0;
}

