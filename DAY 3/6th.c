#include <stdio.h>
#include <math.h>

int main() {
    double num;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Using floor() and ceil() functions
    double floorValue = floor(num);
    double ceilValue = ceil(num);

    // Display results
    printf("Number entered: %.2lf\n", num);
    printf("Floor value: %.2lf\n", floorValue);
    printf("Ceil value : %.2lf\n", ceilValue);

    return 0;
}

