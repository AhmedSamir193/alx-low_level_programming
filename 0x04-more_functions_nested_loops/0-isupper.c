#include "main.h"

/**
 * isdigit - checks for a digit from (0-9)
 * @c: The number will check
 *
 * Return: 1 if the number is a digit, 0 for otherwise
*/
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}
