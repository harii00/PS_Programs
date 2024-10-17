#include <stdio.h>
#include<string.h>
#include<stdbool.h>

bool isValid(char *str){
    int len = strlen(str);
    int index=0;
    char k[len];
    for(int i=0;i<len;i++){
        char ch = str[i];
        if(ch == '(' || ch == '[' || ch == '{'){
            k[index] = ch;
            index++;
        }
        else if(ch == ')'){
            if(index == 0 || k[--index] !='('){
                return false;
            }
        }
        else if(ch == ']'){
            if(index == 0 || k[--index] != '['){
                return false;
            }
        }
        else if(ch == '}'){
            if(index == 0 || k[--index] != '{'){
                return false;
            }
        }
    }
    return (index==0);
}

int main() {
    char str[100];
    printf("Enter paranthesis : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    if(isValid(str)){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}
