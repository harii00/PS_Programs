#include<stdio.h>
#include<string.h>
#include<ctype.h>
int upperLower(char *str){
    int lower[26]={0};
    int upper[26]={0};

    for(int i=0;str[i]!='\0';i++){
        if(islower(str[i])){
            lower[str[i]-'a']=1;
        }
        else if(isupper(str[i])){
            upper[str[i]-'A']=1;
        }
    }

    for(int i=25;i>=0;i--){
        if(lower[i] && upper[i]){
            printf("%c",'A'+i);
            return 0;
        }
    }
    printf("No common letter found");
    return 0;

}

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    upperLower(str);
}