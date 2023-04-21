#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "variadic_functions.h"

void print_all(const char *const format, ...)
{
	va_list args;
	char *valid = "cisf";
	int i = 0, j, args_count = 0;

	if (!format)
		return;
	va_start(args, format);

	while (format[i])
	{
		j = 0;
		while (valid[j])
		{
			if (format[i] == valid[j])
			{
				printf("format: %c, i: %d\n", format[i], i);
				print_format(format, i, args);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
				args_count++;
				printf("args_count: %d\n", args_count);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

void print_format(const char *format, int i, va_list args)
{
	char *str;

	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 'i':
		printf("%d", va_arg(args, int));
		break;
	case 's':
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	default:
		break;
	}
}
