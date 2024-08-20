#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n],sum;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum : ");
    scanf("%d",&sum);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
}