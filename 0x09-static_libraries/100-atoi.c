#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 * @s: string beiing converted
 * Return: an integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int un_num = 0;
	int minimum = 1;
	int b = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			minimum *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			b = 1;
			un_num = (un_num * 10) + (s[a] - '0');
			a++;
		}
		if (b == 1)
		{
			break;
		}
		a++;
	}
	un_num *= minimum;
	return (un_num);
}
