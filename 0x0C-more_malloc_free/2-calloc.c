#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	arr = malloc(total);

	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, total);

	return (arr);
}
