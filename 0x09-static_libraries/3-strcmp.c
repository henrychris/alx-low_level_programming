#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare each character in both strings */
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
		{
			/* If characters differ, return the difference */
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}
	/* If they get to this point, the strings are prob the same*/
	return (*(s1 + i) - *(s2 + i));
}

/**
 * _strlen - calculate string length without \0
 * @s: the array variable
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int count = 1;
	int length = 0;
	char c = *s;

	while (c != '\0')
	{
		c = *(s + count);
		count++;
		length++;
	}
	return (length);
}
