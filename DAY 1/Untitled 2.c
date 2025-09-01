#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Taking input from user
    printf("Enter first floating number: ");
    scanf("%f", &num1);

    printf("Enter second floating number: ");
    scanf("%f", &num2);

    // Adding the numbers
    sum = num1 + num2;

    // Displaying the result
    printf("Sum = %.2f\n", sum);

    return 0;
}
