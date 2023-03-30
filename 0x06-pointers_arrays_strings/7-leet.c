#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == letters[j])
			{
				/*
				* integer division means it's rounded to the position
				* close to it
				*/
				*(s + i) = numbers[j / 2];
			}
		}
	}
	return (s);
}
