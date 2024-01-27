/******************************************************************************
*           program to find the number of even numbers in an array            *
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,count;
    printf("Enter the size of array\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the values of array\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]%2==0)
            count++;
    }
    printf("Number of even numbers in the array is %d\n", count);
}
