#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, n_count = n, count = 0, count_2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	while (*(s1 + count) != '\0')
		count++;

	if (s2 == NULL)
		s2 = "";
	while (count_2 >= 0)
	{
		if (*(s2 + count_2) == '\0' && count_2 == n_count)
			break;
		else if (count_2 == n_count)
			break;
		count_2++;
	}

	ptr = malloc(sizeof(s1[0]) * (count + count_2) + 1);
	if (ptr != NULL)
	{
		for (i = 0; i < (count + count_2); i++)
		{
			if (i < count)
				ptr[i] = s1[i];
			else
				ptr[i] = s2[i - count];
		}
		*(ptr + count + count_2) = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
