#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string,
 * or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len = 0, j = 0, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(size);
	if (str == NULL)
	{
		return (NULL);
	}

	/* initialize */
	_memset(str, '\0', size);

	while (*(s1 + j) != '\0')
	{
		*(str + j) = *(s1 + j);
		j++;
		len++;
	}

	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(str + len) = *(s2 + j);
		j++;
		len++;
	}
	return (str);
}

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

	for (i = 0; i < (int) n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

/**
 * _strlen - calculate string length without \0
 * @s: the array variable
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int count = 1;
	int length = 0;
	char c = *s;

	while (c != '\0')
	{
		c = *(s + count);
		count++;
		length++;
	}
	return (length);
}
