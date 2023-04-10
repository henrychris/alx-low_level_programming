/**
 * _isupper - check if char is uppercase
 * @c: the character
 * Return: 1 is true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
