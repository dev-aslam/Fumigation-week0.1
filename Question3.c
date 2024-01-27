/******************************************************************************              
*               Write a program to find the simple interest.                  *
*******************************************************************************/


#include <stdio.h>

int main()
{
    int principal_amount;
    float intrest_rate, n_of_years, simple_intrest;
    
    printf("Enter the Principal amount\n");
    scanf("%d",&principal_amount);
    printf("Enter the Intrest rate\n");
    scanf("%f",&intrest_rate);
    printf("Enter the Number of years\n");
    scanf("%f", &n_of_years);
    simple_intrest = (principal_amount*intrest_rate*n_of_years)/100;
    printf("The simple intrest is %0.2f", simple_intrest);
    
    return 0;
}
