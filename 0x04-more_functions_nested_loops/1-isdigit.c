/**
 * _isdigit - check if char is a digit
 * @c: the character
 * Return: 1 is true, 0 is false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
