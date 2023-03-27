#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string variable
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;
	char c = *str;

	while (c != '\0')
	{
		c = *(str + count);
		_putchar(c);
		count++;
	}
	_putchar('\n');
}
