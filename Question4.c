/******************************************************************************
*     program to check whether a student has passed or failed in a subject    *
*******************************************************************************/


#include <stdio.h>

int main()
{
    float marks_secured;
    printf("Enter your mark\n");
    scanf("%f",&marks_secured);
    if(marks_secured>100 || marks_secured <0){
        printf("Invalid entry!!\n");
    }
    else if(marks_secured>=50){
        printf("Passed\n");
    }
    else
        printf("Failed\n");
    
    return 0;
}
