#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string variable
 * Return: void
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int max_size = length + 1;
	char new_string[520];
	char c;
	int i = 0, j;

	while (length > 0 && i < max_size)
	{
		c = *(s + length - 1);
		new_string[i] = c;
		length--;
		i++;
	}

	/* Copy reversed string into original*/
	for (j = 0; j < i; j++)
	{
		*(s + j) = new_string[j];
	}
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
