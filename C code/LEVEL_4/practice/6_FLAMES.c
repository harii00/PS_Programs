#include<stdio.h>
#include<string.h>
#include<ctype.h>

char flamesResult(int count){
    char flames[]="FLAMES";
    int index=0;
    int len = strlen(flames);

    while(len>1){
        index = (index + count-1) % len;
        for(int j = index;j<len;j++){
            flames[j] = flames[j+1];
        }
        flames[len-1]='\0';
        len--;
    }
    return flames[0];

}

int Count(char *str1, char *str2){
    char s1[101], s2[101];

    // Convert everything to lowercase and remove spaces
    int index1 = 0, index2 = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] != ' '){
            s1[index1++] = tolower(str1[i]);   
        }
    }
    s1[index1] = '\0';

    for(int i = 0; str2[i] != '\0'; i++){
        if(str2[i] != ' '){
            s2[index2++] = tolower(str2[i]);   
        }
    }
    s2[index2] = '\0';

    // Remove common characters by marking them as '*'
    for(int i = 0; s1[i] != '\0'; i++){
        for(int j = 0; s2[j] != '\0'; j++){
            if(s1[i] == s2[j]){
                s1[i] = s2[j] = '*';
                break;
            }
        }
    }

    // Counting non '*' characters
    int count = 0;
    for(int i = 0; s1[i] != '\0'; i++){
        if(s1[i] != '*'){
            count++;
        }
    }
    for(int i = 0; s2[i] != '\0'; i++){
        if(s2[i] != '*'){
            count++;
        }
    }

    return count;
}

int main(){
    char str1[101], str2[101];
    printf("Enter name 1 : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter name 2 : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Check for invalid input
    if(strlen(str1) < 2 || strlen(str2) < 2 || strlen(str1) > 100 || strlen(str2) > 100){
        printf("Please enter two different names of 2 to 100 characters long");
        return 0;
    }

    // Calculate the count of non-common characters
    int count = Count(str1, str2);

    // Get the FLAMES result based on the count
    char result = flamesResult(count);
    printf("Result: %c\n", result);

    // switch (result)
    // {
    // case 'F':
    //     puts("FRIENDS");
    //     break;
    // case 'L':
    //     puts("LOVERS");
    //     break;
    // case 'A':
    //     puts("AFFECTION");
    //     break;
    // case 'M':
    //     puts("MARRIAGE");
    //     break;
    // case 'E':
    //     puts("ENEMIES");
    //     break;
    // case 'S':
    //     puts("SIBLINGS");
    //     break;
    // default:
    //     break;
    // }

    return 0;
}
