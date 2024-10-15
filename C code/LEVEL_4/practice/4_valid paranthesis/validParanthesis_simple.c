#include<stdio.h>
#include<string.h>

int isvalid(char *str){
    int curly=0,square=0,round=0;
    for(int i=0;str[i]!='\0';i++){
        int current = str[i];

        if(current = '('){
            round++;
        }
        else if(current = '{'){
            curly++;
        }
        else if(current = '['){
            square++;
        }
        else if(current = ')'){
            round--;
            if(round < 0) return 0;  
        }
        else if(current = '}'){
            curly--;
            if(curly < 0) return 0;
        }
        else if(current = ']'){
            square--;
            if(square < 0) return 0;
        }
    }
    return (round == 0 && curly == 0 && square == 0);
}

int main(){
    char str[100];
    printf("Enter string of paranthesises : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';

    if(isvalid(str)){
        printf("Valid string of parentheses\n");
    }
    else{
        printf("Invalid string of parentheses\n");
    }
}