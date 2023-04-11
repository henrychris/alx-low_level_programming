#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	str = _memset(str, c, size);
	return (str);
}

/**
 * _memset - fills memory with a constant byte
 * @s: the array variable
 * @b: the character to be located
 * @n: the number of bytes to be filled
 * Return: the number of bytes in the initial segment of s which consist only of
 * bytes from accept
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
