#include <iostream>
using namespace std;

int main() {
    // Step 1: Accepting Input
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Step 2: Performing Division
    if (num2 == 0){
        cout << "Denominator can not be zero.";
    } else {
        int div = num1/num2;
        
    	// Step 3: Displaying the Result
        cout << "The Div is: " << div << endl;
    }
    return 0;
}
