#include <stdio.h>

/*
*   program reads character entered by the user
*   and prints it to the screen
*/

int main(void)
{
    printf("Enter a character from the keyboard: ");
    char a1 = getc(stdin);
    printf("The character you entered is: %c\n.", a1);
    return (0);
}
