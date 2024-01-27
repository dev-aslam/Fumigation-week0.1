#include <stdio.h>

int main(){
    int annualIncome;
    float tax;
    printf("Enter your Annual Income\n");
    scanf("%d",&annualIncome);
    if(annualIncome<=250000){
        printf("You dont have to pay income tax\n");
        return 0;
    }
    else if(annualIncome<=500000){
        tax = (float)(annualIncome*5)/100;
    }
    else if(annualIncome<=1000000){
        tax = (float)(annualIncome*20)/100;
    }
    else if(annualIncome>1000000 && annualIncome <=5000000){
        tax = (float)(annualIncome*30)/100;
    }
    printf("Income tax amount = %0.2f",tax);
    
}