#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Write a function that prints strings, followed by a new line
 * @separator:the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing if separator is NULL/ nil if on string is NULL/ the string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(string);
}
