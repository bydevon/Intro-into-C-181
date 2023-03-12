/*************************************************************************
Cuyamaca College CS-181
File name: Lab4Exercise1.cpp
Description: Lab 04, Exercise 1, Write a program that prompts the user to enter a number between 1 and 10 and display the equivalent Roman numeral. 
You must have input validation and not allow a value less than 1 or greater than 10

Developer: Devon Ellison
*************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "This program translates numbers 1-10 into Roman Numerals. " << endl;
    cout << "Choose a number 1 through 10: ";
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "You chosen to translate the number 1 into the roman numeral I. ";
        break;
    case 2:
        cout << "You chosen to translate the number 2 into the roman numeral II. ";
        break;
    case 3:
        cout << "You chosen to translate the number 3 into the roman numeral III. ";
        break;
    case 4:
        cout << "You chosen to translate the number 4 into the roman numeral IV. ";
        break;
    case 5:
        cout << "You chosen to translate the number 5 into the roman numeral V. ";
        break;
    case 6:
        cout << "You chosen to translate the number 6 into the roman numeral VI. ";
        break;
    case 7:
        cout << "You chosen to translate the number 7 into the roman numeral VII. ";
        break;
    case 8:
        cout << "You chosen to translate the number 8 into the roman numeral VIII. ";
        break;
    case 9:
        cout << "You chosen to translate the number 9 into the roman numeral IX. ";
        break;
    case 10:
        cout << "You chosen to translate the number 10 into the roman numeral X. ";
        break;
    default:
        cout << "You entered an incorrect input. ";
    }
    
 

   // cout << "You chose to translate the number " << number << " into the roman numeral " << romanNumeral; << endl;
    


    return 0;
}


