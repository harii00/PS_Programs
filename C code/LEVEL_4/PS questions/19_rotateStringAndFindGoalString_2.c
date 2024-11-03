#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool rotateString(char* str, char* goal) {
    int len_str = strlen(str);
    int len_goal = strlen(goal);

    // If lengths are different, they cannot be rotations of each other
    if (len_str != len_goal) return false;

    // Create a doubled version of `str` by concatenating it with itself
    char doubled_str[2 * len_str + 1];
    strcpy(doubled_str, str);
    strcat(doubled_str, str);

    // Check if `goal` is a substring of the doubled string
    return strstr(doubled_str, goal) != NULL;
}

int main() {
    char str[100];
    char goal[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline from `str`

    printf("Enter the goal string: ");
    fgets(goal, 100, stdin);
    goal[strcspn(goal, "\n")] = '\0'; // Remove newline from `goal`

    bool res = rotateString(str, goal);
    printf("%d\n", res); // Print 1 if `goal` is a rotation of `str`, else 0

    return 0;
}
