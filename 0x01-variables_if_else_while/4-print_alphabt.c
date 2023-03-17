#include <stdio.h>

/**
  * main - print alphabet, without q and e
  * Return: 0
  */
int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		if (!(i == 101 || i == 113))
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
