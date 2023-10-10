#include <iostream>

int main() {
    double num1, num2;

    
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

   
    if (num2 != 0) {
        double result = fmod(num1, num2);
        std::cout << "Modulus of " << num1 << " and " << num2 << " is: " << result << std::endl;
    } else {
        std::cout << "Cannot find modulus with zero divisor." << std::endl;
    }

    return 0;
}
