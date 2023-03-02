#include "main.h"
#include <stdio.h>
/**
 * *rot13 - a function that encodes a string using rot13
 * @str: pointer to string
 * Return: string
 */
char *rot13(char *str)
{
	int a, b;
	char str_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotstr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (str[a] == str_1[b])
			{
				str[a] = rotstr[a];
				break;
			}
		}
	}
	return (str);
}
