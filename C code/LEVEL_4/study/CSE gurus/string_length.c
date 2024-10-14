#include<stdio.h>
#include<string.h>
int main(){
    int count=0,i=0;
    char str[500];
    gets(str);
    for(i;str[i]!='\0';i++){
        count++;
    }
    printf("the length of the string is : %d\n",count);
    printf("the length of the string is : %d",i);
    return 0;
}