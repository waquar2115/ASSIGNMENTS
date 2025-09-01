#include <stdio.h>

int main() {
    int num, lastDigit;

    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Find last digit without using modulus
    lastDigit = num - (num / 10) * 10;

    // Handle negative numbers
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }

    // Display result
    printf("The last digit of %d is %d\n", num, lastDigit);

    return 0;
}
