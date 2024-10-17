#include<stdio.h>
#include<string.h>
#include<ctype.h>
//function to store only the integers from the string
int digit(char *str,int *arr){
    int index=0;
    for(int i=0;str[i]!='\0';i++){
        if(isdigit(str[i])){
            arr[index]=str[i]-'0';
            index++;
        }
    }
    return index;

}


int main(){
    char str[1001];
    int arr[1001]; 
    
    printf("Enter a alphanumeric string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    int size = digit(str,arr);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    if(size<2){
        printf("\n-1");
        return 0;
    }
    printf("\n\n");

    //sorting the array
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }
    printf("array after sorting");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    //removing the dupliates from the array 
    int finalarray[size],ind=0;
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==0){
            // printf("%d ",arr[i]);
            finalarray[ind] = arr[i];
            ind++;
        }
    }

    printf("\n\nFinal array:\n");
    //final array size is in ind
    for(int i=0;i<ind;i++){
        printf("%d ",finalarray[i]);
    }
    
    int result = finalarray[ind-2];
    printf("The second largest is : %d",result);


    return 0;
}