#include<stdio.h>
int main(){
    int arr[100],fq[100],n,count=1;
    printf("Array size :");
    scanf("%d",&n);
    printf("Array value : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        fq[i]=1;
    }
    for(int i=0;i<n;i++){
        count=1;
        if(fq[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    fq[j]=-1;
                }
            }
        fq[i]=count;
        }
    }   
    for(int i=0;i<n;i++){
        if(fq[i]!=-1){
            printf("%d : %d\n",arr[i],fq[i]);
        }
    } 
}