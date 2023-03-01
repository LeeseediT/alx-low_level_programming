#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @n: a pointer
 * Return: n
 */
char *leet(char *n)
{
	int a;
	int b;
	char str_1[] = "aAeEoOtTlL";
	char str_2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == str_1[b])
			{
				n[a] = str_2[b];
			}
		}
	}
	return (n);
}
