#include<stdio.h>
int input(char str[],int num){
    int i=0,ch;
    while( (ch = getchar()) != '\n')
        if(i<num)
            str[i++]=ch;
    str[i]='\0';
    return i;
}

int main(){
    char str[20];
    int num;
    int n = input(str,5);
    printf("%d %s",n,str);
    return 0;
}