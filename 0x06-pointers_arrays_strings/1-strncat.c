#include "main.h"

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

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: string being appended to
 * @src: string to be appended
 * @n: number of bytes to be appended
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = _strlen(dest);
	int j = 0;

	while (j < n && (*(src + j) != '\0'))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (i > n)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
