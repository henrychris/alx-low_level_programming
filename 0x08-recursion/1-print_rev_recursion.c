#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/*
		* terminate the recursion and print char
		* before the null byte
		*/
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
