// replace space

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100]; // Original string
//     char result[300]; // Resultant string (enough space for replacements)
//     int j = 0; // Index for the result array

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; // Remove newline character

//     for (int i = 0; i < strlen(str); i++) {
//         if (str[i] == ' ') {
//             // Replace space with "%10"
//             result[j++] = '%';
//             result[j++] = '1';
//             result[j++] = '0';
//         } else {
//             // Copy the original character
//             result[j++] = str[i];
//         }
//     }
    
//     result[j] = '\0'; // Null-terminate the resultant string

//     printf("String with spaces replaced: %s\n", result);
//     return 0;
// }

//replace letters

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>


// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str,"\n")]='\0';
//     for(int i=0;i<strlen(str);i++){
//         if(str[i]=='e'){
//             str[i]='f';
//         }
//         else if(str[i]=='h'){
//             str[i]='j';
//         }
//         else if(isdigit(str[i])){
//             str[i]='n';
//         }
//     }
//     printf("str replaced : %s",str);
// }

// print odd position

// #include<stdio.h>
// #include<string.h>

// int main(){
//     int n;
//     printf("Enter number of words: ");
//     scanf("%d",&n);

//     char words[n][100];
//     printf("Enter a words(each in newline):\n");

//     for(int i=0;i<n;i++){
//         scanf("%s",words[i]);
//     }
//     char result[1000]="";
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             strcat(result,words[i]);
//         }
//     }
//     printf("%s",result);
//     return 0;
    
// }


//delete target using memmove()

// #include<stdio.h>
// #include<string.h>

// void deleteTarget(char *str,const char *target){
//     int targetlen=strlen(target);
//     char *pos;
//     // while ((pos = strstr(str, target)) != NULL)
//     while((pos = strstr(str,target)) != NULL){
//         memmove(pos, pos + targetlen, strlen(pos + targetlen)+1);
//     }
// }

// int main(){
//     char str[1000],target[1000];
//     printf("Enter a string : ");
//     fgets(str,sizeof(str),stdin);
//     str[strcspn(str,"\n")]='\0';

//     printf("Enter the target string : ");
//     fgets(target,sizeof(target),stdin);
//     target[strcspn(target,"\n")]='\0';

//     deleteTarget(str,target);
//     printf("The string after target deletion : %s",str);
//     return 0;
// }

//version using strtol()

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int versions(char *v1,char *v2){
//     int n1,n2;

//     while(*v1 != '\0' || *v2 != '\0'){

//         n1 = strtol(v1,&v1,10);
//         n2 = strtol(v2,&v2,10);

//         if(n1>n2) return 1;
//         if(n1<n2) return -1;

//         if(*v1 == '.') v1++;
//         if(*v2 == '.') v2++;

//     }
//     return 0;
// }

// int main(){
//     char version1[100],version2[100];
//     printf("Enter version 1 : ");
//     fgets(version1,sizeof(version1),stdin);
//     version1[strcspn(version1,"\n")]='\0';

//     printf("Enter version 2 : ");
//     fgets(version2,sizeof(version2),stdin);
//     version2[strcspn(version2,"\n")]='\0';

//     int result=versions(version1,version2);

//     if(result==0){
//         printf("%%s is equal to %s",version1,version2);
//     }
//     else if (result>0){
//         printf("%s is greater than %s",version1,version2);
//     }
//     else if(result<0){
//         printf("%s is lesser than %s",version1,version2);

//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], toReplace, newChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character from input

    // Input character to be replaced and the new character
    printf("Enter the character to replace: ");
    scanf(" %c", &toReplace);
    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    int lastIndex = -1;

    // Find the last occurrence of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == toReplace) {
            lastIndex = i;  // Update last occurrence index
        }
    }

    // Replace the character at last occurrence if it was found
    if (lastIndex != -1) {
        str[lastIndex] = newChar;
    }

    printf("Modified string: %s\n", str);

    return 0;
}
