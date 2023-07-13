#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes
 *
 * Return: the pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, le1 = 0, le2 = 0;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i])
i++;

while (s2[le1])
le1++;

if (n >= le1)
le2 = i + le1;
else
le2 = i + n;

str = malloc(sizeof(char) * 1e2 + 1);
if (str == NULL)
return (NULL);

le1 = 0;
while (j < le2)
{
if (j <= i)
str[j] = s1[j];

if (j >= i)
{
str[j] = s2[le1];
le1++;
}
j++;
}
str[j] = '\0';
return (str);
}
