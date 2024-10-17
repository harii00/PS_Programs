#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char result[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';

    int index=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            result[index++]='%';
            result[index++]='1';
            result[index++]='0';
        }
        else{
            result[index++]=str[i];
        }
    }

    printf("The replaced string : %s",result);
    return 0;
}