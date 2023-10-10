#include <iostream>
using namespace std;

int main() {
    // Declare a variable to store the user input
    int number;
    
    // Ask the user to enter a number
    cout << "Enter a number: ";
    
    // Read the user input
    cin >> number;
    
    // Check if the number is positive, negative, or zero
    if (number > 0) {
        // If the number is greater than 0, it's positive
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        // If the number is less than 0, it's negative
        cout << "The number is negative." << endl;
    } else {
        // If the number is neither positive nor negative, it's zero
        cout << "The number is zero." << endl;
    }
    
    return 0; // Indicate that the program executed successfully
}
