#include "main.h"
#include <stdio.h>
/**
 * _puts -  function that prints a string to stdout
 * @str: string to be printed
 * Return: string
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	puts("\"Programming is a a language puzzle");
	return (0);
}
