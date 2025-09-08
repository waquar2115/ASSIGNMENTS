#include <stdio.h>

int main() {
    float basic, hra, ta, da, gross;
    int choice;

    // Input from user
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("\nChoose an option to calculate:\n");
    printf("1. HRA\n2. TA\n3. DA\n4. Gross Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            hra = 2.0 * basic;   // 200% of basic
            printf("HRA = %.2f\n", hra);
            break;

        case 2:
            ta = 0.10 * basic;   // 10% of basic
            printf("TA = %.2f\n", ta);
            break;

        case 3:
            da = 0.05 * basic;   // 5% of basic
            printf("DA = %.2f\n", da);
            break;

        case 4:
            hra = 2.0 * basic;
            ta = 0.10 * basic;
            da = 0.05 * basic;
            gross = basic + hra + ta + da;
            printf("Gross Salary = %.2f\n", gross);
            break;

        default:
            printf("Invalid choice! Please enter 1–4.\n");
    }

    return 0;
}

