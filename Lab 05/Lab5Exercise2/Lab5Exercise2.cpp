/*************************************************************************
Cuyamaca College CS-181
File name: Lab5Exercise2.cpp
Description: Lab 05, Exercise 2, Distance Traveled, Write a program that prompts the user for the speed of a vehicle in miles per hour and the number of hours traveled. The 
program must then use a loop to calculate and display the distance the vehicle traveled for each hour of the time period. 

Developer: Devon Ellison
*************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int speed, hours, distance = 0;

    cout << "Enter the Speed you were going in miles per hour: ";
    cin >> speed;
    cout << "Enter the Number of hours traveled: ";
    cin >> hours;

    while (speed < 1 || hours < 1)
    {
        cout << "Invalid Input Number less than 1" << endl;
        cout << "Enter the Speed you were going in miles per hour: " << endl;
        cin >> speed;
        cout << "Enter the Number of hours traveled: " << endl;
        cin >> hours;
    }

    cout << "Hours       Distance Traveled" << endl;
    cout << "-----------------------------" << endl;

    // code below is from https://jesushilarioh.com/chapter-5-6-distance-traveled-tony-gaddis-starting-out-with-c-plus-plus/ with my own edits on it
    for (int i = 0; i < hours; i++)
    {
        distance += speed; // distance = distance + speed
        cout << i + 1 << "           " << distance << endl;
    }



    return 0;
}


