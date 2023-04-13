#include "main.h"
#include <stdlib.h>

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
 * _strcpy - copies string content into another
 * @dest: string copied to
 * @src: string being copied
 * @start: where to start copying from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src, int start)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + start) = *(src + i);
		i++;
		start++;
	}
	*(dest + i + start) = '\0';
	return (dest);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int lens1, lens2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get string lengths for later */
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);

	/* 1 extra for null terminator*/
	str = malloc(lens1 + lens2 + 1);
	if (str == NULL)
		return (NULL);
	str = _strcpy(str, s1, 0);

	/* reset counter */
	i = 0;
	if ((int) n >= lens2)
		str = _strcpy(str, s2, lens1);
	else
	{
		while (i < (int)n)
		{
			*(str + lens1 + i) = *(s2 + i);
			i++;
		}
		*(str + lens1 + i) = '\0';
	}
	return (str);
}
