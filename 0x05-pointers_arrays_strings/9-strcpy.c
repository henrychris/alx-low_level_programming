#include "main.h"

/**
 * _strcpy - copies string content into another
 * @dest: string copied to
 * @src: string being copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;
	char c;

	for (i = 0; i <= length; i++)
	{
		c = *(src + i);
		*(dest + i) = c;
	}

	return (dest);
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
