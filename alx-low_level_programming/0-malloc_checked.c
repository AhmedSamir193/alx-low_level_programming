#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes
 *
 * Return: the pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);

if (ptr == NULL)
	exit(98);

return (ptr);
}
