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
    const int minNum = 1;
    int num;
    int numAdd = 1;
    int total = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    while (num < 0)
    {
        cout << "Invalid Input Try Again " << endl;
        cout << "Enter a positive number: ";
        cin >> num; // has to be greater than 0
    }
    
/* code below was borrowed from https ://jesushilarioh.com/chapter-5-1-sum-of-numbers-tony-gaddis-starting-out-with-c-plus-plus/
I didn't like some of the code but I used the i as he did as I was confusing myself otherwise
*/

    for (int i = 1; i <= num; i++)
    {
        cout << total << "+" << i << " = ";
        total += i;
        cout << total << endl;
    }

    return 0;
}

