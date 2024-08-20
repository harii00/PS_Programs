#include<stdio.h>
int main(){
    int arr1[5],arr2[5],arr3[5];
    printf("The entered values of the array1: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\nThe entered values of the array2: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    //sum of arr1 and arr2
    for(int i=0;i<5;i++){
        arr3[i]=arr1[i]+arr2[i];
    }
    printf("\nThe  values of the array 3: \n");
    for(int i=0;i<5;i++){
        printf("%d ",arr3[i]);
    }
}