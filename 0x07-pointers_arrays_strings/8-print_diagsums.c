#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: the array variable
 * @size: the size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_left = 0, sum_right = 0;
	int k = size;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_left += *(a + i * size + j);
				sum_right += *(a + i * size + (k - 1));
				k--;
			}
		}
	}
	printf("%d", sum_left);
	printf(", %d\n", sum_right);
}
