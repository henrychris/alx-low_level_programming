#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the array variable
 * @needle: the character to be located
 * Return: the number of bytes in the initial segment
 * of s which consist only of
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		/*
		 * check if the first character of
		 * needle is equal to haystack
		 */
		for (j = i, k = 0; *(needle + k) != '\0'; j++, k++)
		{
			/* if the characters are not equal, break */
			if (*(haystack + j) != *(needle + k))
			{
				break;
			}
		}
		/*
		 * if the characters are equal,
		 * return the pointer to the first
		 */
		if (*(needle + k) == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
