#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the array variable
 * @b: the character to be located
 * @n: the number of bytes to be filled
 * Return: pointer to inital array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
