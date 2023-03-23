#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: a parameter
 * @...: a variable number of arguments
 * Return: sum of all parameters or 0 is n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list more_num;
	unsigned int sum = 0;
	unsigned int i;

	va_start(more_num, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(more_num, int);

	va_end(more_num);
	return (sum);
}
