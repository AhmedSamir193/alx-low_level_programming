#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - returns if a number is prime
 * @n: the number
 *
 * Return: 1 if n is a prime number, otherwise 0
*/
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (prime(n, n - 1));
}

/**
 * prime - calcualates if a number is prime recursively
 * @n: the number
 * @i: iterator
 *
 * Return: 1 if n is a prime, otherwise 0
*/
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
