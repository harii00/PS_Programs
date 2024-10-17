#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len;

    // Input the string
    printf("Enter a word: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';

    len = strlen(str);

    // Reverse the string
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0'; // Null-terminate the reversed string

    // Print alternate characters from the reversed string
    printf("Output: ");
    for (int i = 0; i < len; i += 2) {
        printf("%c", reversed[i]);
    }
    printf("\n");

    return 0;
}
