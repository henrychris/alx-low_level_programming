#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the array variable
 * @accept: the character to be located
 * Return: the number of bytes in the initial
 * segment of s which consist only of
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k++;
				break;
			}
		}
		if (*(accept + j) == '\0')
		{
			break;
		}
	}
	return (k);
}
