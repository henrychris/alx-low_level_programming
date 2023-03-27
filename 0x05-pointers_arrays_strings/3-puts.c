#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string variable
 * Return: void
 */
void _puts(char *str)
{
	int count = 1;
	char c = *str;

	while (c != '\0')
	{
		_putchar(c);
		c = *(str + count);
		count++;
	}
	_putchar('\n');
}
