
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input from the user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest calculation
    simpleInterest = (principal * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}

