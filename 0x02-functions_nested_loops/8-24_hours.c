#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: time between 00:00 and 23:59
 */
void jack_bauer(void)
{
	int hour, min;

	hour = 0;

		while (hour < 24)
		{
			min = 0;
			while (min < 60)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
				_putchar('\n');
				min++;
			}
			hour++;
		}
}
