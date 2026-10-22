
/*
    Name: Kymani Toney Hamilton
    Course: CS 151
    Assignment: Homework #2
    Program: exchange.cpp

    This program converts U.S. dollars into Japanese yen and euros.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Exchange rates provided in the assignment.
    const double yenPerDollar = 98.93;
    const double euroPerDollar = 0.74;

    // Get the dollar amount from the user.
    double dollars;

    cout << "Enter the amount in U.S. dollars: $";
    cin >> dollars;

    // Convert dollars to yen and euros.
    double yen = dollars * yenPerDollar;
    double euros = dollars * euroPerDollar;

    // Display currency amounts with two decimal places.
    cout << fixed << setprecision(2);

    cout << "$" << dollars << " U.S. dollars equals:" << endl;
    cout << yen << " Japanese yen" << endl;
    cout << euros << " euros" << endl;

    return 0;
}
