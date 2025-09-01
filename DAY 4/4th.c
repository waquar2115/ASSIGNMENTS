#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int toss;

    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number: 0 or 1
    toss = rand() % 2;

    if (toss == 0) {
        printf("It's Head!\n");
    } else {
        printf("It's Tail!\n");
    }

    return 0;
}

