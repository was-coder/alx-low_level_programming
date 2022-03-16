#include "main.h"

/**
 * jack_bauer - print every minute in a day
 * Return: return 0 as success
 */

void jack_bauer(void)
{
	int hours, min;

	hours = 0;

	while (hours < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		hours++;
	}
}
