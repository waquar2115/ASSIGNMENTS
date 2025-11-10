#include <stdio.h>
int main() {
    int n = 3;  // number of rows in upper half

    // Upper half of pattern
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");           // spaces before stars

        for (int j = 1; j <= i; j++)
            printf("* ");          // print stars with space
        printf("\n");
    }

    // Lower half of pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--)
            printf(" ");           // spaces before stars

        for (int j = 1; j <= i; j++)
            printf("* ");          // print stars with space
        printf("\n");
    }

    return 0;
}
