#include <stdio.h>

int main() {
    int num, originalNum, reverse = 0, digit;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    // Reverse the number using while loop
    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    // Check if palindrome
    if (originalNum == reverse)
        printf("%d is a palindrome number.\n", originalNum);
    else
        printf("%d is not a palindrome number.\n", originalNum);

    return 0;
}

