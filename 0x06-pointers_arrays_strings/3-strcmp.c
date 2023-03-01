#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: string number 1
 * @s2: the other string
 * Return: 0 if successful
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
