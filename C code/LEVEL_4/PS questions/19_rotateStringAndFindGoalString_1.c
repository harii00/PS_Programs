#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool rotateString(char* str, char* goal) {
    int n = strlen(str);
    int m = strlen(goal);
    
    // If lengths are different, they cannot be rotations of each other
    if (n != m) return false;

    for (int j = 0; j < n; j++) {
        // Perform one right rotation
        char temp = str[n - 1];
        for (int i = n - 1; i > 0; i--) {
            str[i] = str[i - 1];
        }
        str[0] = temp;
        
        // Check if this rotation matches `goal`
        if (strcmp(str, goal) == 0) {
            return true;
        }
    }

    return false; // Return false if no match found after `n` rotations
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
