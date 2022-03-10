/*This program outputs the value of x and y*/
#include <stdio.h>

int integer_value(int x)
{
  int y;
  y = 5 + x;
  return y;
}

int main()
{
  int y_value;
  
  y_value = integer_value(3);
  printf("y is %d.\n", y_value);
  return 0;
}
