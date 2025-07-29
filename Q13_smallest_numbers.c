#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);

    // Using ternary operator for each condition
    (num1 < num2) ? printf("First number is smaller.\n") :
    (num1 > num2) ? printf("Second number is smaller.\n") :
                    printf("The numbers are equal.\n"); // Added \n for consistency

    return 0;
}
