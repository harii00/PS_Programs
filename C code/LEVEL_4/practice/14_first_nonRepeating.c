#include<stdio.h>
#include<string.h>

char nonRepeating(char *str){
    int freq[26]={0};
    int len = strlen(str);

    for(int i=0;i<len;i++){
        freq[str[i]-'a']++;
    }

    for(int i=0;i<len;i++){
        if(freq[str[i]-'a']==1){
            return str[i];
        }
    }
    return '0';
}

int main(){
    char str[100001];
    printf("Enter a string :");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    char result = nonRepeating(str);
    if(result != '0'){
        printf("The first non repeating character is : %c",result);
    }
    else{
        printf("None");
    }
    return 0;
}