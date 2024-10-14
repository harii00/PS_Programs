#include<stdio.h>
#include<string.h>

// int main(){
//     char str[100];
//     printf("Enter a string : ");
//     fgets(str,sizeof(str),stdin);
//     str[strcspn(str,"\n")]='\0';
//     printf("The string is: %s\n",str);
//     printf("The reversed string is : %s",strrev(str));
//     return 0;
// }

int main(){
    char str[100];

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    int len = strlen(str);
    int i=0,j=len-1;
    for(i,j;i<j;i++,j--){
        int temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
}

//     0   1   2   3    4
//   ['h','a','r','i','\0']

//  reverse ->  ['i','a','r','h','\0']
//              first and last values are swapped
//              ['i','r','a','h','\0']
//              then other values are swapped