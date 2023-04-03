#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the array variable
 * @c: the character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	if (c == '\0')
	{
		return (s + i);
	}

	return ('\0');
}
