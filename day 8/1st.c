#include <stdio.h>

// Function to find sum of first n even natural numbers
int sumEven(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += 2 * i;  // Even numbers are 2, 4, 6, ...
    }
    return sum;
}

int main() {
    int n = 10;
    int result = sumEven(n);
    
    printf("Sum of first %d even natural numbers = %d\n", n, result);
    
    return 0;
}

