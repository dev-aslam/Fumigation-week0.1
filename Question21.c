#include <stdio.h>

int main(){
    int num;
    printf("Enter array limit\n");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the values of array\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int result[num-1];
    for(int i=0;i<num-1;i++){
        result[i]=arr[i]*arr[i+1];
    }
    for(int i=0;i<num-1;i++){
        printf("%d ",result[i]);
    }
}
