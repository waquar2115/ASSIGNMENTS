#include <stdio.h>

int main() {
    char ch;

    // Input from user
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Space before %c to avoid newline issues

    // Switch case to check vowels
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            // Check if it is an alphabet
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("%c is a consonant.\n", ch);
            else
                printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}

