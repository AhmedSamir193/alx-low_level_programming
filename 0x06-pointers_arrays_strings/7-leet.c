#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string
 *
 * Return: resulting string;
*/
char *leet(char *s)
{
int i, m;
char *a = "aAeEoOtTlL";
char *b = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (m = 0; m < 10; m++)
{
if (s[i] == a[m])
{
s[i] = b[m];
}
}
}
return (s);
}
