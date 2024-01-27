/******************************************************************************
*        program to print the multiplication table of given numbers.          *
*******************************************************************************/


#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    for(int i =1;i<=10;i++){
        printf("%d x %d = %d \n",i,number,i*number);
    }
}
