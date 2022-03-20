#include <stdio.h>
/* If statement */


int higher(int num1, int num2)
{
    if(num1 > num2){
        return num1;
    }
    else
    {
        return num2;
    }
}


void main (void)
{
    printf("The biggest number is: %d\n", higher(5, 20));
}
