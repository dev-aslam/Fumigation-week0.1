/******************************************************************************
*               program to interchange the values of two arrays.              *
*******************************************************************************/


#include <stdio.h>
void dispalyArray(int arr[]);
int main()
{
    int num;
    printf("Enter the size of the arrays\n");
    scanf("%d",&num);
    int array1[num],array2[num],temp;
    printf("Enter the values of Array 1\n");
    for(int i=0;i<num;i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter the values of Array 2\n");
    for(int i=0;i<num;i++){
        scanf("%d",&array2[i]);
    }
    
    for(int i=0;i<num;i++){
        temp = array1[i];
        array1[i]=array2[i];
        array2[i]=temp;
    }
    printf("Array 1: ");
    displayArray(array1,num);
    printf("Array 2: ");
    displayArray(array2,num);
}

void displayArray(int arr[],int num){
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}