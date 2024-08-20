#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    if (n<= 0) {
        printf("Invalid input\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements for the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nthe array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //duplicate count
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( arr[i]==arr[j] ){
                count++;
                break;
            }
        }
    }
    if(count==0){
        printf("\noutput : ");
        printf("%d",0);
    }
    else if(count>0){
        printf("\noutput : ");
        printf("\n %d",count);
    }
    else{
        printf("\noutput : ");
        printf("\nInvalid input");
    }
}