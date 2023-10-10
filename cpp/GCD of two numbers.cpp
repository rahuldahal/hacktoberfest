#include <iostream>

using namespace std;

// Function to find GCD using Euclidean algorithm
int findGCD(int a, int b) {
    // Keep finding remainder until b becomes 0
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // GCD is stored in 'a' after the loop
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Call the function and output the result
    int gcd = findGCD(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}
