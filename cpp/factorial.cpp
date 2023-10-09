#include <iostream>

// Function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    // Input: Ask user for a number
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Calculate factorial
    int result = factorial(number);

    // Output: Display the factorial of the input number
    std::cout << "Factorial of " << number << " = " << result << std::endl;
    return 0;
}
