#include "main.h"
/**
 * _strlen_recursion - a function returning length of a string
 * @s: a string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
