#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100];
    printf("Enter the first string: ");
    gets(str1);
    int i=0;
    for(i;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("The copied string is: %s",str2);
}