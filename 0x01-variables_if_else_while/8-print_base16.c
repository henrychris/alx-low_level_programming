#include <stdio.h>

/**
  * main - print hexadecimal chars
  * Return: 0
  */
int main(void)
{
	int i = 1;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar(i - 10 + 'a');
	}
	putchar(10);
	return (0);
}
