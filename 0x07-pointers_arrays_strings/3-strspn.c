#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: intial segment
 * @accept: the source string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c, result;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		result = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				c++;
				result = 1;
			}
		}
		if (c == 0)
		{
			return (0);
		}
	}
	return (c);
}
