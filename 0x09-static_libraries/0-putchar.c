#include "main.h"

/**
  * main - print _putchar to screen
  * Return: 0, always
  */

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
