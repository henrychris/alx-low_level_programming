#include "main.h"

/**
  * _islower - Checks if a char is lowercase
  * @c: the character being checked
  * Return: 1 if true, 0 if false
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
