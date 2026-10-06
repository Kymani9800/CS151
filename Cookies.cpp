// Cookies.cpp
// Name: Kymani Toney Hamilton 
// This program calculates the ingredients needed for a specified number of cookies.

#include <iostream>
using namespace std;

int main()
{
    // Original recipe amounts
    const double SUGAR = 1.5;
    const double BUTTER = 1.0;
    const double FLOUR = 2.75;
    const double ORIGINAL_COOKIES = 48.0;

    // Get the number of cookies the user wants
    int desiredCookies;

    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

    // Calculate the recipe scaling factor
    double scaleFactor = desiredCookies / ORIGINAL_COOKIES;

    // Calculate the ingredients needed
    double sugarNeeded = SUGAR * scaleFactor;
    double butterNeeded = BUTTER * scaleFactor;
    double flourNeeded = FLOUR * scaleFactor;

    // Display the results
    cout << "Cups of sugar needed: " << sugarNeeded << endl;
    cout << "Cups of butter needed: " << butterNeeded << endl;
    cout << "Cups of flour needed: " << flourNeeded << endl;

    return 0;
}
