#include<stdio.h>
#include<string.h>
void foo(char *a){
    if(*a && *a !=' '){
        foo(a+1);
        putchar(*a);
    }
}
int main(){
    char arr[]="ABCD EFGH";
   foo(arr);
}