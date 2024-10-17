#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHARS 256

bool areIsomorphic(char *str1, char *str2) {
    int map1[MAX_CHARS] = {0}; // To map characters of str1 to str2
    int map2[MAX_CHARS] = {0}; // To map characters of str2 to str1
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not the same, they can't be isomorphic
    if (len1 != len2) {
        return false;
    }
    // Iterate through characters of both strings
    for (int i = 0; i < len1; i++) {
        // Get current characters of both strings
        char c1 = str1[i];
        char c2 = str2[i];

        // If mapping does not exist, create one
        if (map1[c1] == 0 && map2[c2] == 0) {
            map1[c1] = c2;
            map2[c2] = c1;
        }
        // If mapping exists, check for consistency
        else if (map1[c1] != c2 || map2[c2] != c1) {
            return false;
        }
    }
    return true;
}

int main() {
    char str1[100], str2[100];

    // Input the two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check if the strings are isomorphic
    if (areIsomorphic(str1, str2)) {
        printf("Isomorphic\n");
    } else {
        printf("Not Isomorphic\n");
    }

    return 0;
}
