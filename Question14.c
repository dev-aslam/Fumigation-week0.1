/******************************************************************************
*               program to add to two dimensional arrays                      *
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    printf("Enter the array size\n");
    scanf("%d",&num);
    int arr1[num][num],arr2[num][num];
    printf("Enter the elements of array 1\n");
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of array 2\n");
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The sum of the 2 arrays is: \n");
    
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}
