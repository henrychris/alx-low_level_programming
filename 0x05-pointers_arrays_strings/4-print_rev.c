#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: the string variable
 * Return: void
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	char c;

	while (length > 0)
	{
		c = *(s + length - 1);
		_putchar(c);
		length--;
	}
	_putchar('\n');
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
