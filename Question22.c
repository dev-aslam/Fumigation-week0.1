#include <stdio.h>

void getArray(int num,int a[num][num]);
void addArray(int num,int a[num][num],int b[num][num],int res[num][num]);
void displayArray(int num,int res[num][num]);
int main(){
    int num;
    printf("Enter the limit of the array\n");
    scanf("%d",&num);
    int arr1[num][num],arr2[num][num],result[num][num];
    printf("Enter the values of array 1\n");
    getArray(num,arr1);
    printf("Enter the values of array 2\n");
    getArray(num,arr2);
    addArray(num,arr1,arr2,result);
    displayArray(num,result);
}

void getArray(int num,int a[num][num]){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void addArray(int num, int a[num][num], int b[num][num], int res[num][num]){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            res[i][j]=a[i][j]+b[i][j];
        }
    }
}

void displayArray(int num, int res[num][num]){
    printf("Sum of 2 arrays is : \n");
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}