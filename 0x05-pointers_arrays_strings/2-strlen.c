#include "main.h"

/**
 * _strlen - calculate string length without \0
 * @s: the start of the array
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
