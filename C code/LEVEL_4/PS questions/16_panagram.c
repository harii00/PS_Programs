#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPangram(char *str) {
    int alphabet[26] = {0};
    int index;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {  // Check if the character is a letter
            index = tolower(str[i]) - 'a'; // Convert the letter to lowercase and map 'a' to 0, 'b' to 1, etc.
            alphabet[index] = 1; // Mark the letter as found
        }
    }

    // Check if all letters are present
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            return 0; // If any letter is not found, return 0 (not a pangram)
        }
    }
    return 1; // All letters are present, return 1 (pangram)
}

int main() {
    char str[1000];

    // Input the string from the user
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    // Check if the string is a pangram and print the result
    if (isPangram(str)) {
        printf("The given sentence is a pangram.\n");
    } else {
        printf("The given sentence is not a pangram.\n");
    }

    return 0;
}
