#include <stdio.h>
#include <math.h>

int main() {
    double num;

    // Will be Taking Input from here
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Calculate and display square root
    if (num >= 0) {
        printf("Square root: %lf\n", sqrt(num)); **Inbuild Function
    } else {
        printf("Cannot find square root of a negative number\n");
    }

    return 0;
}
