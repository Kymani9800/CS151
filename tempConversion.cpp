// tempConversion.cpp
// Name: Kymani Toney Hamilton 
// This program converts Celsius to Fahrenheit.

#include <iostream>
using namespace std;

int main()
{
    // Variable for Celsius temperature
    double celsius;

    // Get the Celsius temperature
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    double fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Display the Fahrenheit temperature
    cout << "The temperature in Fahrenheit is "
         << fahrenheit << " degrees." << endl;

    return 0;
}
