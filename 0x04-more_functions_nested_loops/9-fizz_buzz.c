#include <stdio.h>

/**
 * main - FizzBuzz!
 * Return: void
 */

int main(void)
{
	int i = 1;

	for (; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3 == 0))
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i != 100)
		{
			printf("Buzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
			printf("%d ", i);
	}
}

