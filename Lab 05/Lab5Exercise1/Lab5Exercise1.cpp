/*************************************************************************
Cuyamaca College CS-181
File name: Lab5Exercise1.cpp
Description: Lab 05, Exercise 1, Sum of Numbers, Write a program that prompts the user for a positive integer value. Do not allow a negative value. The program must then use a 
loop to calculate the sum of all integers from 1 up to the user entered value. If the user enters 20, the program will compute the 
sum of 1, 2, 3, 4, ..., 20. 

Developer: Devon Ellison
*************************************************************************/

#include <iostream>
using namespace std;


int main()
{
    int num;
    int numAdd = 1;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Invalid Input ";

    }
    while (numAdd <= num)
    {
        cout << numAdd << endl;

        numAdd++;
    }





    return 0;
}

