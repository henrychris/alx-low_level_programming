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
