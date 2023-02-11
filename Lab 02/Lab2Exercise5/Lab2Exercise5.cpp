/*************************************************************************
Cuyamaca College CS-181
File name: Lab2Exercise5.cpp
Description: Lab 02, Exercise 5, You just bought 750 shares of stock at a price of $35 per share. You need to pay your stockbroker a 2% commission for the 
transaction. Write a program that calculates and displays the following: 
Amount paid for the stock without commission. 
The commission amount. 
Total (stock purchase + commission) 
Developer: Devon Ellison
*************************************************************************/


// My Solution

#include <iostream>
using namespace std;


int main()
{
    int stockTotal = 750;
    int stockPrice = 35;
    int commission = .02;
    int stockTotalPrice = stockTotal * stockPrice;
    int commissionPaid = stockTotalPrice * commission;
    int total = commissionPaid + stockTotalPrice;

    cout << "Amount Paid for your stocks $" << stockTotalPrice << endl;
    cout << "You paid $" << commissionPaid << " in commision to your broker." << endl;
    cout << "In total you paid $" << total << endl;
        return 0;
}



/*

int main()
{
    int stockTotal;

    cout << "How much stock did you buy? ";
    cin >> stockTotal;

    int stockPrice;

    cout << "How much did you pay for each stock? ";
    cin >> stockPrice;

    double commission;

    cout << "What was your commission rate? (Percents as decimals please.) ";
    cin >> commission;

    int stockTotalPrice = stockTotal * stockPrice;
    int commissionPaid = stockTotalPrice * commission;
    int total = commissionPaid + stockTotalPrice;



    cout << "Amount Paid for your stocks $" << stockTotalPrice << endl;
    cout << "You paid $" << commissionPaid << " in commision to your broker." << endl;
    cout << "In total you paid $" << total << endl;
        return 0;
}

*/




