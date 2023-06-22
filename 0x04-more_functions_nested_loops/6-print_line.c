#include "main.h"

/**
 * print_line - draw a straight line using the character _
 * @n: the number of _ character will be checked
*/
void print_line(int n)
{
int l;
if (n > 0)
{
for (l = 0; l < n; l++)
_putchar('_');
}
_putchar('\n');
}
