#include <stdio.h>

int main() {
    int marks, m;
    char grade;

    // Input marks
    printf("Enter marks of the student: ");
    scanf("%d", &marks);
    m=(marks / 10);
    // Switch case based on marks ran   
    switch (m) {
        case 10:   // 100
        case 9:    // 90–99
            if (m >= 95)
                grade = 'A' + 1;   // Trick for A+ (we’ll handle separately)
            else
                grade = 'A';
            break;

        case 8:    // 80–89
            grade = 'B';
            break;

        case 7:    // 70–79
            grade = 'C';
            break;

        default:   // Below 70
            grade = 'F';
    }

    // Display result
    if (grade == 'B' || grade == 'C' || grade == 'F')
        printf("Grade = %c\n", grade);
    else if (grade == 'A' + 1)   // for A+
        printf("Grade = A+\n");
    else
        printf("Grade = %c\n", grade);

    return 0;
}

