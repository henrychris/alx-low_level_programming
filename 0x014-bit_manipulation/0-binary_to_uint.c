#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mul = 1;
	int len = 0, i;

	if (b == NULL || b[0] == '\0')
		return (0);

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			num += mul;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		mul *= 2;
	}
	return (num);
}
