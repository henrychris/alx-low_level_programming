#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int total_size;
	int *arr, i;

	/* get the numbers between, then plus 1 to */
	/* include min and max */
	total_size = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(total_size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		*(arr + i) = min;
		min++;
	}
	return (arr);
}
