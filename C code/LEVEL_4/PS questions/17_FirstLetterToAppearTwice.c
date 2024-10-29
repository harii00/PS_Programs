#include <stdio.h>
#include<string.h>

char repeatedCharacter(char* s) {
    int ch[26]={0};
    for(int i=0;s[i]!='\0';i++){
        if(ch[s[i]-'a']==1){
            return s[i];
        }
        ch[s[i]-'a']++;
    }
}

int main() {
    char str[100];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    char letter = repeatedCharacter(str);
    printf("%c",letter);
    
    return 0;
}
