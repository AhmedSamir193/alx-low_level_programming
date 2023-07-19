#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - calculates the sum of two int
 * @a: first int
 * @b: second int
 *
 * Return: sum of two int
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - calculates difference of two int
 * @a: first int
 * @b: second int
 *
 * Return: difference of a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calculates the product of two int
 * @a: first int
 * @b: second int
 *
 * Return: mul of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - calculates the division of two int
 * @a: first int
 * @b: second int
 * Return: div of a and b
*/
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - calculates remainder of div of two int
 * @a: first int
 * @b:second int
 * Return: remainder of a div b
*/
int op_mod(int a, int b)
{
return (a % b);
}
