#include <iostream>
#include <bits/stdc++.h>

int main() {
    char operation;
    double num1, num2;

    // Input: Ask user for operation and two numbers
    std::cout << "Enter an operation (+, -, *, /,^): "<<std :: endl;
    std :: cout << "+ --> Adds two numbers"<<std :: endl;
    std :: cout << "- --> Subtracts the second number from the first number"<<std :: endl;
    std :: cout << "* --> Multiplies the two numbers"<<std :: endl;
    std :: cout << "/ --> Divides num1 by num2 and gives the quotient"<<std :: endl;
    std :: cout << "^ --> Calculates num1 to the power num2"<<std :: endl;
    std::cin >> operation;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the calculation based on the operation
    double result;
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the denominator is not zero
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed.";
                return 1; // Exit with error code 1
            }
            break;
        case '^':
        // Gives the remainder when num1 is divided by num2
            result = pow(num1,num2);
            break;
        default:
            std::cout << "Error: Invalid operation.";
            return 1; // Exit with error code 1
    }

    // Output: Display the result of the calculation
    std::cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;

    return 0;
}
