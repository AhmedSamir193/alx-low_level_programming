#include <string.h>
#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: the string to get the length
 *
 * Return: The length of @strlen
*/
int _strlen(char *s)
{
int l = 0;
for (; *s != '\0'; s++)
{
	l++;
}
return (l);
}
