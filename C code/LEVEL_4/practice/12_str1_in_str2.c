#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canConstruct(char *userOne, char *userTwo) {
    // If userOne is an empty string, return true.
    if (strlen(userOne) == 0) {
        return true;
    }
    // Check if userOne is a substring of userTwo.
    if (strstr(userTwo, userOne) != NULL) {
        return true;
    }
    return false;
}

int main() {
    char userOne[101], userTwo[101];
    printf("Enter message from userOne: ");
    fgets(userOne, sizeof(userOne), stdin);
    userOne[strcspn(userOne, "\n")] = '\0';  // Remove newline character.

    printf("Enter message from userTwo: ");
    fgets(userTwo, sizeof(userTwo), stdin);
    userTwo[strcspn(userTwo, "\n")] = '\0';  // Remove newline character.

    if (canConstruct(userOne, userTwo)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
