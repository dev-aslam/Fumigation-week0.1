/******************************************************************************
*           program to sort an array in descending order                      *
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the size of array\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the values of array\n");
    
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<num-1;i++){
        for(int j=i;j<num;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    printf("Sorted array: ");
    
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}
