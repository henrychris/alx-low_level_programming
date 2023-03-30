#include "main.h"

/**
 * is_separator - checks if a character is a separator
 * @c: character to be checked
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
	switch (c)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);
	default:
		return (0);
	}
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

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i = 1;
	char prev;

	for (; i < _strlen(s); i++)
	{
		prev = *(s + i - 1);
		if (is_separator(prev))
		{
			if (*(s + i) >= 97 && *(s + i) <= 122)
			{
				*(s + i) = (*(s + i) - 97) + 65;
			}
		}
	}

	return (s);
}
