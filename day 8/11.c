#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    printf("Enter a string: ");
    gets(str1);  // You can use fgets(str1, sizeof(str1), stdin) for safer input

    // Copy string manually (character by character)
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0'; // Add null terminator

    printf("Copied string: %s\n", str2);

    return 0;
}

