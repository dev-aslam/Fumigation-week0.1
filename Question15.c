/******************************************************************************
*  program to accept an array and display it on the console using functions   *
*******************************************************************************/

#include <stdio.h>

void getArray(int a[],int num);
void displayArray(int array[],int num);
int main(){
    int num;
    printf("Enter the number of array elements\n");
    scanf("%d",&num);
    int arr[num];
    getArray(arr,num);
    displayArray(arr,num);
}

void getArray(int a[],int num){
    printf("Enter the values of the array\n");
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
}

void displayArray(int array[],int num){
    printf("Array: ");
    for (int i= 0;i<num;i++){
        printf("%d ",array[i]);        
    }
    
}