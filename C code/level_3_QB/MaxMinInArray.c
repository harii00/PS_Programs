#include<stdio.h>
int main(){
    int n;
    printf("Array size : ");
    scanf("%d",&n);
    if(n>365){
        printf("Invalid");
        return 1;
    }
    int arr[n],max,min;
    printf("Array values : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nThe minimum : %d",min);
    printf("\nThe maximum : %d",max);
}