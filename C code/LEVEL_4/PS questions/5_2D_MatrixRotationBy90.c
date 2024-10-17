#include<stdio.h>
#include<string.h>
int main(){
    char arr[3][3]={{'a','b','c'},{'i','j','k'},{'x','y','z'}};
    printf("The matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\narray rotated clockwise 90 degree:\n");

    for(int i=0;i<3;i++){
        for(int j=2;j>=0;j--){
            printf("%c ",arr[j][i]);
        }
        printf("\n");
    }

    printf("\narray rotated Anti-clockwise 90 degree:\n");

    for(int i=2;i>=0;i--){
        for(int j=0;j<3;j++){
            printf("%c ",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}