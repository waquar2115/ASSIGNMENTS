 #include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Subtraction
    result = num1 - num2;

    // Output the result
    printf("Result = %.2f\n", result);

    return 0;
}
