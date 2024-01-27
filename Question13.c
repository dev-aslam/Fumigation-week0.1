/******************************************************************************
*        program to identify whether a string is a palindrome or not           *
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int flag = 1;
    printf("Enter the string\n");
    scanf("%s",string);
    int len = 0;
    while(string[len]!='\0'){
        len++;
    }
    len=len-1;
    for(int i=0;i<len/2;i++){
        if(string[i]!=string[len-i]){
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Entered String is Palindrome\n");
    else
        printf("Entered String is not palindrome\n");
    return 0;
}
