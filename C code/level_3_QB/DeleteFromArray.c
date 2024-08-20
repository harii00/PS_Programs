#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    printf("Enter the position the array to be deleted : ");
    scanf("%d",&index);

    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("The array after deletion : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //printf("\n%d",sizeof(arr)/sizeof(arr[0]));
}