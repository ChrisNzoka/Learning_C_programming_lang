#include <stdio.h>

/**
* main - starting point
*
* Description - program prints character input
* while the character is not equal to 'x'
*
* Return 0 on success
*/

int main(void)
{
  int c;

  c = ' ';
  puts("Enter a character: \n(enter x to exit)\n");
  while (c != 'K')
  {
    c = getc(stdin);
    putchar(c);
  }
  printf("\nOut of the while loop. Have a nice day!!!\n");
  return (0);
}
