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

int isanagram( char *s, char *t){
    int count[26]={0};//count array is of size 26 and all the values are 0
    
    // count the number of characters in first string
    for(int i=0;i<s[i];i++){
        if(s[i]!= ' '){
            int index = s[i] - 'a';
            count[index]++;
        }
    }
    //count the number of characters in second string
    for(int i=0;i<t[i];i++){
        if(t[i]!= ' '){
            int index = t[i] - 'a';
            count[index]--;
        }
    }
    //if the count array entirely contain the value 0 then the strings are anagram
    for( int i=0 ;i<26;i++){
        if(count[i]!=0){
            return 0;
        }
    }
    return 1; 
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

    if(isanagram(s,t)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}