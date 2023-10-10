#include <iostream>
using namespace std;

// Function to generate Fibonacci series up to n terms
void generateFibonacci(int n) {
    int first = 0, second = 1, nextTerm;

    // Print the first two terms of the Fibonacci series
    cout << "Fibonacci Series up to " << n << " terms: ";
    cout << first << " " << second << " ";

    // Generate and print the rest of the Fibonacci series
    for (int i = 3; i <= n; ++i) {
        nextTerm = first + second;
        cout << nextTerm << " ";

        // Update first and second to generate the next term
        first = second;
        second = nextTerm;
    }
}

int main() {
    // Declare a variable to store the number of terms
    int n;

    // Ask the user to enter the number of terms
    cout << "Enter the number of terms for Fibonacci series: ";
    
    // Read the number of terms from the user
    cin >> n;

    // Call the function to generate and print Fibonacci series
    generateFibonacci(n);

    return 0; // Indicate that the program executed successfully
}
