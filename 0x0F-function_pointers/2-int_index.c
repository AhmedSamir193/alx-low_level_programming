#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to compare
 *
 * Return: index of the first element for which the cmp function ...
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}
}
}
return (-1);
}
