#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Display ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
