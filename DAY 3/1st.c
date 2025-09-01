#include <stdio.h>

int main() {
    int num, lastDigit;

    // Taking input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Finding last digit using modulus operator
    lastDigit = num % 10;

    // If number is negative, make last digit positive
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }

    // Display result
    printf("The last digit of %d is %d\n", num, lastDigit);

    return 0;
}
