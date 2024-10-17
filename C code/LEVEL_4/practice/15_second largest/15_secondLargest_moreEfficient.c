#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Function to store only the integers from the string
int digit(char *str, int *arr) {
    int index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            arr[index] = str[i] - '0';
            index++;
        }
    }
    return index;
}

int main() {
    char str[1001];
    int arr[1001];

    printf("Enter an alphanumeric string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int size = digit(str, arr);
    if (size < 2) {
        printf("\n-1");
        return 0;
    }
    // Sort the array (Bubble sort)
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Remove duplicates from the sorted array
    int finalarray[1001], ind = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            finalarray[ind] = arr[i];
            ind++;
        }
    }
    // Check if there are at least two unique digits
    if (ind < 2) {
        printf("\n-1");
    } else {
        int result = finalarray[ind - 2];
        printf("The second largest unique digit is: %d", result);
    }
    return 0;
}