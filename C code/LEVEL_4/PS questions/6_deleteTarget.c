#include<stdio.h>
#include<string.h>

void deleteTarget(char *str,const char *target){
    int targetlen=strlen(target);
    char *pos;
    while((pos = strstr(str,target)) != NULL){
        memmove(pos, pos + targetlen, strlen(pos + targetlen)+1);
    }
}
int main(){
    char str[1000],target[1000];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    printf("Enter the target string : ");
    fgets(target,sizeof(target),stdin);
    target[strcspn(target,"\n")]='\0';

    deleteTarget(str,target);
    printf("The string after target deletion : %s",str);
    return 0;
}