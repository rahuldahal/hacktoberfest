#include <iostream>

int main() {
    double num1, num2, result;


    std::cout << "Enter the first number: ";
    std::cin >> num1;

    
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    result = num1 * num2;

    std::cout << "The multiplication of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}
