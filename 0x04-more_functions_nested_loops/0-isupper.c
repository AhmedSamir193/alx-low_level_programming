#include "main.h"

/**
 * _isupper - checks for Uppercase characters
 * @c: The number will check
 *
 * Return: 1 if the number is a digit, 0 for otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
