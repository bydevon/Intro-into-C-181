/*************************************************************************
Cuyamaca College CS-181
File name: Lab2Exercise4.cpp
Description: Lab 02, Exercise 4, An employee gets paid every two weeks and earns $2,200 each pay period. In a year, the employee gets paid 26 times. Write a 
program that defines the following variables: 
payAmount - This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 2200.0. 
payPeriods - This variable will hold the number of pay periods in a year. Initialize the variable with 26. 
annualPay - This variable will hold the employee’s total annual pay, which will be calculated. 

The program must calculate the employee’s total annual pay by multiplying the employee’s pay amount by the number of pay 
periods in a year and store the result in the annualPay variable. Display the total annual pay on the screen. 
named total, and displays the total.
Developer: Devon Ellison
*************************************************************************/


// My Solution

#include <iostream>
using namespace std;


int main()
{
    // payAmount - This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 2200.0. 
    double payAmount = 2200.0;
    //payPeriods - This variable will hold the number of pay periods in a year.Initialize the variable with 26.
    int payPeriods = 26;
    //annualPay - This variable will hold the employee’s total annual pay, which will be calculated. 
    double annualPay = payPeriods * payAmount;

    cout << "Your salary is estimated to be $" << annualPay << " for this year before taxes." << endl;
    return 0;
}

