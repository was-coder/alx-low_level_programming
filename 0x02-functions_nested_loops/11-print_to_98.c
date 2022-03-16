#include "main.h"

/**
 * print_to_98 - print number to 98
 * @n: parameter to check
 *
 * Return: return 0 as success
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		_putchar("%d, ", n);
		n--;
	}

	if (n == 98)
		_putchar("%d", n);

	_putchar('\n');
}
