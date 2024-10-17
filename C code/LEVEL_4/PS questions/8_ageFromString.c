#include <stdio.h>
#include <string.h>

int main() {
    int n, count = 0;
    printf("Enter the number of passengers: ");
    scanf("%d", &n);
    
    char details[n][16];
    
    printf("Enter the details of each passenger (15 characters each):\n");
    for(int i = 0; i < n; i++) {
        scanf("%s", details[i]);
    }
    
    for(int i = 0; i < n; i++) {
        // Extract the age (characters 12 and 13) and convert to integer
        int age = (details[i][11] - '0') * 10 + (details[i][12] - '0');
        
        // Check if age is greater than 60
        if(age > 60) {
            count++;
        }
    }
    
    // Print the count of passengers with age > 60
    printf("Number of passengers whose age is greater than 60: %d\n", count);
    
    return 0;
}
