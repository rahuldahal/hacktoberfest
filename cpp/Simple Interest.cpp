#include <iostream>
using namespace std;

int main() {
    // Declare variables for principal amount, rate, and time
    float principal, rate, time, simpleInterest;

    // Ask the user to enter principal amount
    cout << "Enter the principal amount: ";
    cin >> principal;

    // Ask the user to enter the rate of interest
    cout << "Enter the rate of interest (in percentage): ";
    cin >> rate;

    // Ask the user to enter the time period (in years)
    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculate simple interest using the formula: SI = (principal * rate * time) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Display the calculated simple interest
    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}
