#include<stdio.h>
#include<string.h>

int main(){
    char str[100],rev[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    strcpy(rev,str);
    strrev(rev);
    if(strcmp(str,rev)==0){
        printf("password is vulnerable");
    }
    else{
        printf("password is Non-vulnerable");
    }
}

// #include <stdio.h>
// #include <string.h>

// int main(){
// char string[100], rev_string[100];

// printf("Enter a string: ");
// gets(string);
// strcpy(rev_string,string);
// strrev(rev_string);

// if(strcmp(string, rev_string) ==0)
// printf("%s is a palindrome string.\n",string);
// else
// printf("%s is not a palindrome string.\n",string);
// return 0;
// }