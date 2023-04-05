#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (1);
}
