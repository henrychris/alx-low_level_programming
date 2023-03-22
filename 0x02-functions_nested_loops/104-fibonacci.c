#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: void
*/
int main(void)
{
	int print_count = 2;
	double prev = 1.0;
	double curr = 2.0;
	double next = 0.0;

	printf("1, ");
	printf("2, ");

	while (print_count < 97)
	{
		next = prev + curr;
		if (print_count != 96)
		{
			printf("%.0f, ", next);
		}
		else
			printf("%.0f\n", next);

		prev = curr;
		curr = next;
		print_count++;
	}

	return (0);
}
