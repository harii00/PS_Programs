#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Enter number of words: ");
    scanf("%d",&n);

    char words[n][100];
    printf("Enter a words(each in newline):\n");

    for(int i=0;i<n;i++){
        scanf("%s",words[i]);
    }
    char result[1000]="";
    for(int i=0;i<n;i++){
        if(i%2==0){
            strcat(result,words[i]);
        }
    }
    printf("%s",result);
    return 0;
}