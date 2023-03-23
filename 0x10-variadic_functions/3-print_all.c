#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Write a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: only print char/integer/float or char*
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i;
	char *str, *space = "";

	va_start(arg, format);
	i = 0;

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", space, str);
					break;
				default:
					i++;
					continue;
			}
			space = ",";
			i++;
		}
	}
	printf("\n");
	va_end(arg);
}
