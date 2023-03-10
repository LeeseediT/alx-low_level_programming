#include "main.h"
/**
 * _isdigit - checks if number is a digit
 * @num: number being assessed
 * Return: 1 if num is a digit or else return 0
 */
int _isdigit(int num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
