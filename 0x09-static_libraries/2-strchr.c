#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a strig
 * @c: a character in the string
 * Return: pointer to first chacacter c
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (c == s[a])
			return (&s[a]);
	}
	return (0);
}
