// ticketSales.cpp
// Name: Kymani Toney Hamilton 
// This program calculates the total income from ticket sales.

#include <iostream>
using namespace std;

int main()
{
    // Ticket prices
    const double CLASS_A_PRICE = 15.00;
    const double CLASS_B_PRICE = 12.00;
    const double CLASS_C_PRICE = 9.00;

    // Variables for number of tickets sold
    int classATickets;
    int classBTickets;
    int classCTickets;

    // Get the number of tickets sold
    cout << "Enter the number of Class A tickets sold: ";
    cin >> classATickets;

    cout << "Enter the number of Class B tickets sold: ";
    cin >> classBTickets;

    cout << "Enter the number of Class C tickets sold: ";
    cin >> classCTickets;

    // Calculate income
    double classAIncome = classATickets * CLASS_A_PRICE;
    double classBIncome = classBTickets * CLASS_B_PRICE;
    double classCIncome = classCTickets * CLASS_C_PRICE;

    double totalIncome = classAIncome + classBIncome + classCIncome;

    // Display total income
    cout << "The amount of income generated from ticket sales is $"
         << totalIncome << endl;

    return 0;
}
