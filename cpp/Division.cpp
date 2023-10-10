#include <iostream>
int main() 
{
    double numerator, denominator, result;
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;
    std::cout << "Enter the denominator: ";
    std::cin >> denominator;
    if (denominator == 0) 
    {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }
    else 
    {
        result = numerator / denominator;
        std::cout << "The division of " << numerator << " by " << denominator << " is " << result << std::endl;
    }
    return 0;
}
