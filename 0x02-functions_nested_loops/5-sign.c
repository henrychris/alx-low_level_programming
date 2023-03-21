#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: the number being checked
  * Return: 1 if +ve, 0 if zero, -1 if -ve
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
