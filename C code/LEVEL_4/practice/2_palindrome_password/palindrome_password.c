#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100],rev[100],buffer[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    //to store the characters to the new string "buffer" after converting tp lowercase and without any spaces
    int index=0;
    for(int i=0;str[i]!='\0';i++){
        if(isalnum(str[i])){
            buffer[index]=tolower(str[i]);
            index++;
        }
    }
    buffer[index]='\0';// the NULL character should be at the last 

    strcpy(rev,buffer);

    int len=strlen(rev);

    int i=0,j=len-1;
    // for(i,j;i<j;i++,j--){
    //     int temp=rev[i];
    //     rev[i]=rev[j];
    //     rev[j]=temp;
    // }

    for(int i; i<len/2; i++){
        int temp = rev[i];
        rev[i]=rev[len-1-i];
        rev[len-1-i]=temp;
    }

    if(strcmp(buffer,rev)==0){
        printf("password is vulnerable");
    }
    else{
        printf("password is Non-vulnerable");
    }
}