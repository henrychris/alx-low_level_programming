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
 * _strcat - concatenates two strings
 * @dest: string being appended to
 * @src: string to be appended
 * Return: the concatenated string, src + dest
 */
char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int j = 0;

	while ((*(src + j) != '\0'))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
