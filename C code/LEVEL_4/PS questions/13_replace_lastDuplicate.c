#include <stdio.h>
#include <string.h>

int main() {
    char str[100], toReplace, newChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character from input

    // Input character to be replaced and the new character
    printf("Enter the character to replace: ");
    scanf(" %c", &toReplace);
    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    int lastIndex = -1;

    // Find the last occurrence of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == toReplace) {
            lastIndex = i;  // Update last occurrence index
        }
    }

    // Replace the character at last occurrence if it was found
    if (lastIndex != -1) {
        str[lastIndex] = newChar;
    }

    printf("Modified string: %s\n", str);

    return 0;
}
