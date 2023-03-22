#include <stdio.h>

/**
  * main - return sum of all even valued fibonacci numbers
  * < 4,000,000
  * Return: 0
  */
int main(void)
{
	double prev = 1.0;
	double curr = 2.0;
	double next = 0.0;
	double sum = 0.0;

	while (next < 4000000)
	{
		next = prev + curr;
		if ((int)next % 2 == 0)
		{
			sum += next;
		}

		prev = curr;
		curr = next;
	}
	printf("%.0f\n", sum);
	return (0);
}
