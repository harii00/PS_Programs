/*
#include<stdio.h>
int main(){
    int n;
    printf("Array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int num=arr[i];
        int count=0;
        int digit[10];

        while(num > 0 ){
            digit[count]=num%10;
            num=num/10;
            count++;
        }
        for(int j=count-1;j>=0;j--)
        {
            printf("%d ",digit[j]);
        }
    }
}
*/

#include<stdio.h>
int main(){
    int n;
    printf("Array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("[");
    for(int i=0;i<n;i++){
        int num=arr[i];
        int count=0;
        int digit[10];

        while(num > 0 ){
            digit[count]=num%10;
            num=num/10;
            count++;
        }
        for(int j=count-1;j>=0;j--)
        {
            if(j!=0)
                printf("%d, ",digit[j]);
            else
                printf("%d",digit[j]);
        }
        if(i!=n-1)
            printf(", ");
    }
    printf("]");
}