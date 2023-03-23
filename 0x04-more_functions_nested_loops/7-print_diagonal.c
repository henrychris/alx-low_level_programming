#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal. n times long.
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
