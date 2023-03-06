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
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
