#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of an array
 * @c: char to initialize an array
 *
 * Return: pointer of array
*/
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *s;

if (size == 0)
return (NULL);
s = malloc(size * sizeof(char));
if (s == NULL)
return (NULL);

for (n = 0; n < size; n++)
{
s[n] = c;
}
return (s);
}
