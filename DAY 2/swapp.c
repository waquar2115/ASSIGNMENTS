#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers from the user
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display before swap
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // Display after swap
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

