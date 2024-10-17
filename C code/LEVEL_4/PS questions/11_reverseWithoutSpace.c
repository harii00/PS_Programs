#include <stdio.h>
#include <string.h>

// Function to reverse a word
// void reverseWord(char *word) {
//     int len = strlen(word);
//     for (int i = 0; i < len / 2; i++) {
//         char temp = word[i];
//         word[i] = word[len - 1 - i];
//         word[len - 1 - i] = temp;
//     }
// }

int main(){
    char str[100],word[100];
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int index=0;
    for (int i=0;i<=strlen(str);i++){
        if(str[i]==' ' || str[i]=='\0'){
            word[index]='\0';
            strrev(word);
            printf("%s ",word);
            index=0;
        }
        else{
            word[index]=str[i];
            index++;
        }
    }
    return 0;

}