#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the array variable
 * @src: the character to be located
 * @n: the number of bytes to be filled
 * Return: pointer to string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
