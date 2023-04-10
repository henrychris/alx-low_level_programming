#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
