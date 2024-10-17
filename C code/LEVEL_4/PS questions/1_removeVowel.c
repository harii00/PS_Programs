#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isVowel(char ch){
    // ch=(ch>='A' && ch<='Z') ? ch+32 : ch;
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main(){
    char str[100],str1[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';
    int index=0;
    for(int i=0;i<strlen(str);i++){
        if(!isVowel(str[i])){
            str1[index]=str[i];
            index++;
        }
    }
    printf("The string without vowel is : %s",str1);
    return 0;
}