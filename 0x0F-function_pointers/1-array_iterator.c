#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each array elemnt
 * @array: array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
