#include<stdio.h>
int main(){
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size],count=0;

    printf("Enter %d elements of the array :-\n");

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count++;
        }
    }  
    if(count>0){
        printf("The number of even digits is %d",count);
    }
    else{
        printf("There are no even numbers in the elements");
    }
}