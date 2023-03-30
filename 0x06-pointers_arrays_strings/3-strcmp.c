#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	/* at this point it checks length to save on iteration*/
	int check = _strlen(s1) == _strlen(s2) ? 0 :
		(_strlen(s1) > _strlen(s2) ? 1 : -1);


	if (check != 0)
	{
		return (check);
	}

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) > *(s2 + i))
		{
			return (1);
		}
		else if (*(s1 + i) < *(s2 + i))
			return (-1);
	}

	return (0);
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
