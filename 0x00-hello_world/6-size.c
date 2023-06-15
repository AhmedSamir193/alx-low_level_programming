#include <stdio.h>

/**
 * main - prints the size of data types
 *
 * Return: Always (0)
 */
int main(void)
{
	printf("size of char: %u byte(s)\n", Sizeof(char));
	printf("size of int: %u byte(s)\n", Sizeof(int));
	printf("size of long int: %u byte(s)\n", Sizeof(long int));
	printf("size of long long int: %u byte(s)\n", Sizeof(long long int));
	printf("size of float: %u byte(s)\n", Sizeof(float));
	return (0);
}
