//Dennis kilel
//BSE-01-0059/2025
//gross pay calculation
//8/6/2025

#include<iostream> 
#include <cmath> 


using namespace std;

int main() {
    float hours_worked, hourly_wage,grossPay, taxes, netPay;

    cout << "Enter hours worked in a week"<<endl;
    cin >> hours_worked;
    cout << "Enter your hourly wage: $"<<endl;
    cin >> hourly_wage;

    if (hours_worked <= 40) {
        grossPay = hours_worked * hourly_wage;
    } else {
        grossPay = 40 * hourly_wage + (hours_worked - 40) * hourly_wage * 1.5;
    }

    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = 600 * 0.15 + (grossPay - 600) * 0.20;
    }

    netPay = grossPay - taxes;

    
    cout << " your Gross Pay is: $" << grossPay << endl;
    cout << "Taxes:     $" << taxes << endl;
    cout << "your Net Pay is:   $" << netPay << endl;

    return 0;
}
