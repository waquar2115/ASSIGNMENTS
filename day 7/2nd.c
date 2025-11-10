#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using while loop
    while (num != 0) {
        digit = num % 10;            // Get the last digit
        reverse = reverse * 10 + digit;  // Build the reversed number
        num = num / 10;              // Remove the last digit
    }

    // Display result
    printf("Reversed number = %d\n", reverse);

    return 0;
}

