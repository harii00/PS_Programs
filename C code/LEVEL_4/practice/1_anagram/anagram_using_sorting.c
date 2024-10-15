#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isvalid( char *str){
    //checking is the string has only spaces and lowercase characters
    for( int i=0;str[i];i++){
        if(!(str[i]==' ' || (str[i]>='a' && str[i]<='z'))){
            return 0;
        }
    }
    return 1;
}

int AnagramUsingSorting( char *s, char *t){
    int l1 = strlen(s),l2=strlen(t);
    //sorting string 1
    for(int i=0;i<l1-1;i++){
        for(int j=0;j<l1-1-i;j++){
            if(s[j]>s[j+1]){
                int temp = s[j];
                s[j]= s[j+1];
                s[j+1] = temp;
            }
        }
    }
    //sorting string 2
    for(int i=0;i<l2-1;i++){
        for(int j=0;j<l2-1-i;j++){
            if(t[j]>t[j+1]){
                int temp = t[j];
                t[j]= t[j+1];
                t[j+1] = temp;
            }
        }
    }
    if(strcmp(s,t)==0){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){
    char s[100001],t[100001];//10^5 is 100000 and extra 1 is for the NULL character
    printf("Enter first word :");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';

    printf("Enter second word :");
    fgets(t,sizeof(t),stdin);
    t[strcspn(t,"\n")]='\0';

    //checking the length of the input strings
    if(strlen(s)<1 || strlen(s)>100000 || strlen(t)<1 || strlen(t)>100000){
        printf("String must be between 1 and 100000 characters");
        return 1;
    }

    if(!isvalid(s)){
        printf("Invalid character in first string");
        return 1;
    }
    if(!isvalid(t)){
        printf("Invalid character in second string");
        return 1;
    }

    if(AnagramUsingSorting(s,t)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}