/******************************************************************************
*              Accept two inputs from the user and output its sum.            *
*******************************************************************************/

#include <stdio.h>

int main()
{
    int number1;
    float number2,sum;
    printf("Enter the two numbers\n");
    scanf("%d%f",&number1,&number2);
    sum = number1+number2;
    printf("The sum is %f",sum);
    return 0;
}
