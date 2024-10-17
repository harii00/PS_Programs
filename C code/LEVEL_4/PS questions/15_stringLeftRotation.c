#include<stdio.h>
#include<string.h>

int main(){
char str[100];
printf("Enter a string: ");
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]='\0';
int n= strlen(str);

int rot,i;
printf("number of rotations : ");
scanf("%d",&rot);
for(int k=1;k<=rot;k++){
//logic for left rotation
char temp=str[0];
for(i=0;i<n-1;i++){
    str[i]=str[i+1];
}
str[i]=temp;
}
printf("%s",str);
return 0;
}