#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a random number to the variable n each time it is executed.
 *
 * Return: Always 0.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("This is positive: %d\n", n);
else if (n < 0)
printf("This is negative: %d\n", n);
else
printf("This is zero: %d\n", n);
}	
