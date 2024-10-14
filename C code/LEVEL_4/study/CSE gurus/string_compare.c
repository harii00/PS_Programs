#include<stdio.h>
#include<string.h>

int equal( char *s1,char *s2){
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str1[100],str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")]='\0';

    printf("Enter the second string :");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2,"\n")]='\0';

    int n1=strlen(str1),n2=strlen(str2);

    if(n1!=n2){
        printf("The strings are not equal.\n");
    }

    else{
        if(equal(str1,str2)==1){
            printf("The strings are equal.\n");
        }
        else{
            printf("The strings are not equal.\n");
        }
    }

    return 0;
}