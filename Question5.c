/******************************************************************************
*             program to show the grade obtained by a student                 *
*******************************************************************************/


#include <stdio.h>

int main()
{
    float total_mark;
    printf("Enter your total mark\n");
    scanf("%f",&total_mark);
    if(total_mark>=90)
        printf("A grade\n");
    else if(total_mark>=80)
        printf("B grade\n");
    else if(total_mark>=70)
        printf("C grade\n");
    else if(total_mark>=60)
        printf("D grade\n");
    else if(total_mark>=50)
        printf("E grade\n");
    else
        printf("Failed\n");
}
