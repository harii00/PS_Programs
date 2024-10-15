#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// Function to check if the input is a valid Roman numeral
bool isValidRoman(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != 'I' && s[i] != 'V' && s[i] != 'X' && s[i] != 'L' && 
            s[i] != 'C' && s[i] != 'D' && s[i] != 'M') {
            return false;
        }
    }
    return true;
}

int romanToInt(char* s) {
    int result = 0;
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        switch(s[i]) {
            case 'I': result += 1; break;
            case 'V': result += 5; break;
            case 'X': result += 10; break;
            case 'L': result += 50; break;
            case 'C': result += 100; break;
            case 'D': result += 500; break;
            case 'M': result += 1000; break;
            default: result += 0; // This shouldn't be reached if input is validated
        }
        // Check for subtraction cases
        if (i > 0) {
            if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I') {
                result -= 2;
            } else if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X') {
                result -= 20;
            } else if ((s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C') {
                result -= 200;
            }
        }
    }
    return result;
}

int main() {
    char str[100];
    printf("Enter a Roman numeral: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // Validate input before conversion
    if (!isValidRoman(str)) {
        printf("Invalid input\n");
        return 0;
    }

    int result = romanToInt(str);
    printf("The integer value of %s is %d.\n", str, result);
    return 0;
}
