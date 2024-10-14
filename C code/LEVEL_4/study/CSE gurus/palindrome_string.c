#include<stdio.h>
#include<string.h>
int ispalindrome(char *str){
    int n=strlen(str);
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]){
            return 0; 
        }
    }
    return 1;
}
int main(){
    char str[500];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';

    if(ispalindrome(str)){
        printf("The string is a palindrome.\n");
    }
    else{
        printf("The string is not a palindrome.");
    }

}