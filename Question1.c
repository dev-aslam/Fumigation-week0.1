/******************************************************************************
 *      Accept a char input from the user and display it on the console.      *
*******************************************************************************/

#include <stdio.h>

int main()
{
    char s;
    printf("Enter a Character\n");
    scanf("%c",&s);
    printf("The entered Character is %c", s);

    return 0;
}
