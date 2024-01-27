#include <stdio.h>

int main(){
    int count=1,num;
    printf("Enter the number of rows\n");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}