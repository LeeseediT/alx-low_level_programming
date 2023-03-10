#include "main.h"
/**
 * _isupper - a function that checks uppercase letters
 * @let: letter being assessed
 * Return: 0 if not uppercase or 1
 */
int _isupper(int let)
{
	if (let >= 'A' && let <= 'Z')
	{
		return (1);
	}
	else {
		return (0);
	}
}
