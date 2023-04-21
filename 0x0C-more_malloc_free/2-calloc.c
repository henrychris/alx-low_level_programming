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
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		*(arr + i) = 0;
	}

	return ((void *)(arr));
}
