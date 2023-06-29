#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
int i, m;

i = 0;
m = 0;

while (dest[i] != '\0')
	i++;
while (src[m] != '\0' && m < n)
{
dest[i] = src[m];
i++;
m++;
}
dest[i] = '\0';
return (dest);
}
