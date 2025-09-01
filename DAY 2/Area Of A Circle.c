#include <stdio.h>

#define PI 3.14159  // Define constant value for pi

int main() {
    float radius, area;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Area calculation
    area = PI * radius * radius;

    // Output the result
    printf("Area of the circle = %.2f\n", area);

    return 0;
}

