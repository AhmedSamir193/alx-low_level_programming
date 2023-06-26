#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string
*/
void rev_string(char *s)
{
int c, l, d;
char *f, len;
f = s;

while (s[l] != '\0')
{
l++;
}
for (d = 1; d < l; d++)
{
f++;
}
for (c = 0; c < (l / 2); c++)
{
len = s[c];
s[c] = *f;
*f = len;
f--;
}
}
