#include <stdio.h>
#include <string.h>

int main()
{
    char string[100],character;
   
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s",string);
    int i=0;
   
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]!='(' &&  string[i] !='{' && string[i] !='[' && string[i]!=')' && string[i]!='}' && string[i]!=']')
        {
                printf("INVALID INPUT\n");
                return 0;
        }
    }
   
    char stack[100]={'0'};
   
    int count=0;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='(' || string[i] == '{' || string[i] == '[')
        {
            stack[count++]=string[i];
        }
        else if(string[i]== ')' || string[i] =='}' || string[i]==']')
        {
            if(string[i]==')' && stack[count-1]=='(')
            {
                stack[count-1]='0';
                count--;
            }
            else if(string[i]=='}' && stack[count-1]=='{')
            {
                stack[count-1]='0';
                count--;
            }
            else if(string[i]==']' && stack[count-1]=='[')
            {
                stack[count-1]='0';
                count--;
            }
            else
            {
                printf("NOT MATCHED !!");
                return 0;
            }
        }
    }
   
    printf("MATCHED !!");

}