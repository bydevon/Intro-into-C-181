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
   
    int end = -1;
    int num, min, max;
    
    cout << "Enter a series of numbers and this program will give you the least and the greatest (Enter a negative number to end) " << endl;
    cout << "Enter a Number: ";
    cin >> num;

    min = num;
    max = num;

    while (num > end)
    {
        if (num < min)
            min = num;
        if (num > max)
            max = num;
        cout << "Enter a Number: ";
        cin >> num;

    }
   
    cout << "Smallest number entered was " << min << endl;
    cout << "Greatest number entered was " << max << endl;

    return 0;
}



