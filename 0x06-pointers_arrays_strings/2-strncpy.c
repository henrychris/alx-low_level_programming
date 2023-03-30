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
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: the final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	if (i < n)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
