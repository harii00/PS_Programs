#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the size of arr1 : ");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of arr2 : ");
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    //sorting array 1
    int temp1;
    for(int i=0;i<n1;i++){
            for(int j=i+1;j<n1;j++){
                if(arr1[i]>arr1[j]){
                 temp1=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp1;
                }
            }
    }
    for(int i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    //sorting array 2
    int temp2;
    for(int i=0;i<n2;i++){
            for(int j=i+1;j<n2;j++){
                if(arr2[i]>arr2[j]){
                 temp2=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp2;
                }
            }
    }
    for(int i=0;i<n2;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    //merged array
    int merged[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            merged[k]=arr1[i];
            k++;
            i++;
        }
        else{
            merged[k]=arr2[j];
            k++;
            j++;
        }

    }
    while(i<n1){
            merged[k]=arr1[i];
            k++;
            i++;
    }
    while(j<n2){
            merged[k]=arr2[j];
            k++;
            j++;
    }
    printf("Sorted : ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}