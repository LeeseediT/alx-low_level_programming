#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character
 * @str: the string
 */
void puts2(char *str)
{
	int i;
	int other = 0;

	while (str[other] != '\0')
	{
		other++;
	}
	for (i = 0; i < other; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
