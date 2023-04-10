#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int val = atoi(argv[i]);

		if (val > 0 && !isalpha(argv[i][0]))
		{
			sum += val;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
