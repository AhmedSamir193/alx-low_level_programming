#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 *
 * Return: resulting string
*/
char *cap_string(char *s)
{
int i, m;

char sp[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;

for (m = 0; m < 13; m++)
{
if (s[i] == sp[m])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
}
}
}
}
return (s);
}
