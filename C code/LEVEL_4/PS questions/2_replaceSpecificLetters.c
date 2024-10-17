
#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='e'){
            str[i]='f';
        }
        else if(str[i]=='h'){
            str[i]='j';
        }
        else if(isdigit(str[i])){
            str[i]='n';
        }
    }
    printf("str replaced : %s",str);
}