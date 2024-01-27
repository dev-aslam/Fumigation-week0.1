/******************************************************************************
*       program to find the sum of all the odd numbers for a given limit      *
*******************************************************************************/


#include <stdio.h>

int main()
{
    int number,sum;
    printf("Enter the limit\n");
    scanf("%d",&number);
    for(int i = 1;i<number;i+=2){
        sum = sum+i;
    }
    printf("The sum of odd numbers within the limit provided is %d",sum);
}
