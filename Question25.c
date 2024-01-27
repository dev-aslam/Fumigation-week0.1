#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[100];
    // entering values from 1 to 99 to array
    for(int i=1;i<100;i++){
        arr[i-1]=i;
    }
    printf("Array contains values from 1 to 99\n");
    int count = 0;
    int num;
    printf("Enter the number of rows\n");
    scanf("%d",&num);
    for(int i=1;i<=num && i<100;i++){
        for(int j=1;j<=i*2;j++){
            if(arr[count]%2==1){
                printf("%d ",arr[count]);
                count+=3;
            }
            else{
                printf("%d ",arr[count]);
                count++;
            }
        }
        printf("\n");
        for(int j=0;j<3*i && i<num;j++){
            if(arr[count]%2==1){
                printf("%d\n",arr[count]);
                count+=3;
            }
            else{
                printf("%d\n",arr[count]);
                count++;
            }
        }
    }
}