#include <stdio.h>
#include<string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    for(int i=0;str[i]!='\0';i++){
        str[0]=toupper(str[0]);
        if(str[i]==' '){
            str[i+1]=toupper(str[i+1]);
        }
    }
    printf("%s",str);
    
    return 0;
}
