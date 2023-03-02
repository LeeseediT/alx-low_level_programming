#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string that will be altered
 * Return: pointer pointing to string
 */
char *cap_string(char *str)
{
	int a = 0;
	int b;
	char separators[] = {32, 9, '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}'};
	int length = 13;

	while (str[a])
	{
		b = 0;
		while (b < length)
		{
			if ((a == 0 || str[a - 1] == separators[b]) &&
				(str[a] >= 97 && str[a] <= 122))
				str[a] = str[a] - 32;
			b++;
		}
		a++;
	}
	return (str);
}
