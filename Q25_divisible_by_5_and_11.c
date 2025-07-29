#include <stdio.h>
#include <stdbool.h> 
bool checkDivisibility(int number) {
    if (number % 5 == 0 && number % 11 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkDivisibility(num)) { // Call the function to check
        printf("%d is divisible by 5 and 11.\n", num);
    } else {
        printf("%d is not divisible by 5 and 11.\n", num);
    }

    return 0;
}
