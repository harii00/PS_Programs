#include<stdio.h>
int main(){
    int n,i,temp,rot;
    printf("Array size : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input");
        return 0;
    }
    int arr[n];
    printf("Array values : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of rotations : ");
    scanf("%d",&rot);

    if(rot<0){
        printf("Invalid rotation");
        return 0;
    }

    for(int j=0;j<rot;j++){
        temp=arr[0];
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
    }   

    printf("The Left rotated array : \n");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1){
            printf(", ");
        }
    }
    printf("]\n");

}