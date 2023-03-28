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
 * puts_half - print half for even, or last n numbers for odd
 * @str: the string variable
 * Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int print_start = length % 2 == 0 ? length / 2 : (length + 1) / 2;

	for (int i = print_start; i < length; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
