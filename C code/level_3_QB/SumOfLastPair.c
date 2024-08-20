#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n],sum;
    int last_i=-1,last_j=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum : ");
    scanf("%d",&sum);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                //printf("(%d,%d)\n",arr[i],arr[j]);
                last_i=i;
                last_j=j;
            }
        }
    }

    if(last_i!=-1 && last_j!=-1){
        printf("%d,%d",arr[last_i],arr[last_j]);
    }
    
}