#include <stdio.h>

/**
  * main - print first 50 fibonacci numbers
  * Return: 0
  */
int main(void)
{
	/* this tracks how many numbers have been printed */
	int print_count = 2;
	double prev = 1.0;
	double curr = 2.0;
	double next = 0.0;

	/**
	 * while n < 0
	 *
	 */
	printf("1, ");
	printf("2, ");

	while (print_count < 50)
	{
		next = prev + curr;
		if (print_count != 49)
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
