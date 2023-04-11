#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given
 * as a parameter
 * @str: string to be copied
 * Return: pointer to the duplicated string,
 */
char *_strdup(char *str)
{
	char *ret_str;
	int size, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str) - 1;
	ret_str = malloc(size);
	if (ret_str == NULL)
	{
		return (NULL);
	}

	while (*(str + j) != '\0')
	{
		*(ret_str + j) = *(str + j);
		j++;
	}
	return (ret_str);
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
