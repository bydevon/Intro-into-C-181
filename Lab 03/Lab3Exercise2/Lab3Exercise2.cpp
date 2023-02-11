/*************************************************************************
Cuyamaca College CS-181
File name: Lab3Exercise2.cpp
Description: Lab 3, Exercise 2, Create a Recipe Adjuster 
Developer: Devon Ellison
*************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // Sugar, Butter, and Flour are all measured in cups
    float sugar = 1.5;
    float butter = 1;
    float flour = 2.75;
    float cookies = 48;
    float cookiesWanted;


        cout << "How many cookies do you want to make? ";
        cin >> cookiesWanted;

        float sugarTotal = (cookiesWanted * sugar) / cookies;
        float butterTotal = (cookiesWanted * butter) / cookies;
        float flourTotal = (cookiesWanted * flour) / cookies;


        cout << "In total you need" << endl;
        cout << "Sugar Needed: " << sugarTotal << " cups" << endl;
        cout << "Butter Needed: " << butterTotal << " cups" << endl;
        cout << "Flour Needed: " << flourTotal << " cups" << endl;


        return 0;
}