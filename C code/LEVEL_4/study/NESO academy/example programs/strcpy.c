#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]="HARI HARA SUDHAN";
    char str2[50];
    strcpy(str2,str1);
    printf("str1 : %s\n",str1);
    printf("str2 : %s",str2);
    return 0;
}