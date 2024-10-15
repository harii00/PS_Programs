#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    int len = strlen(str);
    if(len=1){
        printf("-2");
        return 0;
    }
    if(len<0){
        printf("Invalid");
        return 0;
    }

    substring();
    
    return 0;

}