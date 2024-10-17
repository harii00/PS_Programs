#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareVersions(char *version1, char *version2) {
    int num1, num2;

    // Loop through both version strings
    while (*version1 != '\0' || *version2 != '\0') {
        // Extract numbers between dots
        num1 = strtol(version1, &version1, 10);
        num2 = strtol(version2, &version2, 10);

        // Compare the extracted numbers
        if (num1 > num2) return 1;    // version1 is greater
        if (num1 < num2) return -1;   // version2 is greater

        // Move past the '.' character if it exists
        if (*version1 == '.') version1++;
        if (*version2 == '.') version2++;
    }

    // If all parts are equal
    return 0;
}

int main() {
    char version1[100], version2[100];

    // Input the two version numbers
    printf("Enter the first version number: ");
    scanf("%s", version1);
    printf("Enter the second version number: ");
    scanf("%s", version2);

    // Compare the versions
    int result = compareVersions(version1, version2);

    // Output the result
    if (result == 0) {
        printf("%s is equal to %s\n", version1, version2);
    } else if (result > 0) {
        printf("%s is greater than %s\n", version1, version2);
    } else {
        printf("%s is lesser than %s\n", version1, version2);
    }

    return 0;
}
