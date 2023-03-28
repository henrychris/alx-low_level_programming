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
	int length = _strlen(str);
	int print_start;
	int isodd;
	char c = *str;

	/**
	 * basically, start printing from that point
	 *  for even nums, start at half
	 * for odd, print_start = how many last n digits are we printing
	 */
	print_start = length % 2 == 0 ? length / 2 : (length - 1) / 2;
	/* is odd helps track even or odd */
	isodd = length % 2 == 0 ? 0 : 1;

	if (isodd)
	{
		while (c != '\0')
		{
			/**
			 * c = the item at where we start printing from
			 * e.g. if we print last 4 for an array of 10
			 * we start at 10 - 4 = 6
			 */
			c = *(str + (length - print_start));
			_putchar(c);
			/* as print_start reduces, we move forward */
			print_start--;
		}
	}
	else
	{
		while (print_start != length)
		{
			/* we start at the halfwqay point */
			c = *(str + print_start);
			_putchar(c);
			print_start++;
		}
	}
	_putchar('\n');
}
