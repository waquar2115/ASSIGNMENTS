#include <stdio.h>

int main() {
    int roll_no;

    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    if (roll_no == 100) {
        printf("Roll number 100 is present.\n");
    }
    if (roll_no != 100) {
        printf("Roll number 100 is not present.\n");
    }

    return 0;
}

