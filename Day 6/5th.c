#include <stdio.h>
int main() {
    int low, high, i, j, isPrime;

    printf("Enter lower range: ");
    scanf("%d", &low);
    printf("Enter upper range: ");
    scanf("%d", &high);

    printf("Prime numbers between %d and %d are:\n", low, high);

    for (i = low; i <= high; i++) {
        if (i < 2) continue; 
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    return 0;
}
