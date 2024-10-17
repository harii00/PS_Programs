#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string :");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int freq[26] = {0};
    
    int sumosq = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            sumosq += freq[i] * freq[i];
        }
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[s[i] - 'a'] > 0) {
            printf("%d", freq[s[i] - 'a']);
            freq[s[i] - 'a'] = 0; // Set to zero to avoid printing the same character frequency again
        }
    }

    
    printf("\nSum of the squares: %d\n", sumosq);
    
    return 0;
}
