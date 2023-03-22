#include <stdio.h>

/**
  * main - prints multiples of  3 and 5 below 1024
  * Return: 0
  */
int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
