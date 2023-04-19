/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to a function that prints a name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
