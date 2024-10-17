#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool validRoman(char *str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='I' && str[i]!='V' && str[i]!='X' && str[i]!='L' && str[i]!='C' && str[i]!='D' && str[i]!='M'){
            return false;
        }
    }
    return true;
}

int romanToInt(char *str){
    int result=0;
    for(int i=0;str[i]!='\0';i++){
        switch(str[i]){
            case 'I': result+=1; break;
            case 'V': result+=5; break;
            case 'X': result+=10; break;
            case 'L': result+=50; break;
            case 'C': result+=100; break;
            case 'D': result+=500; break;
            case 'M': result+=1000; break;
            default: result+=0;
        }

        if((str[i] == 'V' || str[i] == 'X') && str[i-1] == 'I'){
            result-=2;
        }
        else if((str[i] == 'L' || str[i] == 'C') && str[i-1] == 'X'){
            result-=20;
        }
        else if((str[i] == 'D' || str[i] == 'M') && str[i-1] == 'C'){
            result-=200;
        }
    }
    return result;
}

int main(){
    char str[100];
    printf("Enter ROMAN value : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    if(!validRoman(str)){
        printf("Invalid input");
        return 0;
    }
    int result = romanToInt(str);
    printf("The integer value for %s is %d ",str,result);
    return 0;
}
