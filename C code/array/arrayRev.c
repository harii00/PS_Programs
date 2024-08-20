#include<stdio.h>
#define N 5
int main(){
    int arr[N];
    printf("Enter the elements of the Array:\n");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nGiven Array:\n");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\nReversed Array:\n");
    for(int i=N-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

}