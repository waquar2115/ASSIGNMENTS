#include <stdio.h>
#include <math.h>   // for sqrt() function

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);

        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        // Discriminant < 0 → no real roots
        printf("No real roots exist (discriminant < 0).\n");
    }

    return 0;
}
