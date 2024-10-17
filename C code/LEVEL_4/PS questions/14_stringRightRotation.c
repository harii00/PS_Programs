#include<stdio.h>
#include<string.h>

int main(){
char str[100];
printf("Enter a string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int n= strlen(str);

int rot;
printf("number of rotations : ");
scanf("%d",&rot);
for(int k=1;k<=rot;k++){
    int i=n-1;
    //logic for right rotation
    char temp=str[n-1];
    for(i;i>0;i--){
        str[i]=str[i-1];
    }
    str[i]=temp;
}

printf("%s",str);
return 0;
}