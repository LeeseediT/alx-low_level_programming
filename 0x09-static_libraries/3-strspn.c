#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: intial segment
 * @accept: the source string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, num, c, result;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		result = 0;
		for (num = 0; accept[num] != '\0'; num++)
		{
			if (accept[num] == s[a])
			{
				c++;
				result = 1;
			}
		}
		if (result == 0)
		{
			return (c);
		}
	}
	return (num);
}
