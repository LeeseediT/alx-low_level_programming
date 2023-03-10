#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: memory area that is pointed to
 * @b: constant byte
 * @n: number of bytes that need to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > a; a++)
	{
		s[a] = b;
	}
	return (s);
}
