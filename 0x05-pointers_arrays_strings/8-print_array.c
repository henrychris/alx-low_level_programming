#include "main.h"

/**
 * print_array - print n elements of an array
 * @a: the array
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, num, digits, k, temp, j, digit;

	for (i = 0; i < n; i++)
	{
		num = *(a + i);
		temp = num;
		while (temp != 0)
		{
			digits++;
			temp /= 10;
		}

		if (num < 0)
		{
			num = -num;
			_putchar('-');
		}

		for (j = digits; j > 0; j--)
		{
			int divisor = 1;

			for (k = 1; k < j; k++)
			{
				divisor *= 10;
			}
			digit = num / divisor % 10;
			_putchar(digit + '0');
		}

		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
