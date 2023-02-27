#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: the string being reversed
 * Return: 0
 */
void print_rev(char *s)
{
int reve = 0;

while (s[reve] != '\0')
{
	reve++;
}

for (reve -= 1; reve >= 0; reve--)
{
	_putchar(s[reve]);
}
_putchar('\n');
}
