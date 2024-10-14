#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    strcpy(str1,"Hello ");
    strcpy(str2,"Hari..!");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}