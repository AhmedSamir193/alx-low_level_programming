#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates two dimensional array
 * @width: the width
 * @height: the height
 *
 * Return: pointer
*/
int **alloc_grid(int width, int height)
{
int n, j, k, l;
int **aar;

if (width <= 0 || height <= 0)
return (NULL);

aar = malloc(sizeof(int *) * height);

if (aar == NULL)
{
free(aar);
return (NULL);
}
for (n = 0; n < height; n++)
{
aar[n] = malloc(sizeof(int) * width);
if (aar[n] == NULL)
{
for (j = n; j >= 0; j--)
{
free(aar[j]);
}
free(aar);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
aar[k][l] = 0;
}
}
return (aar);
}
