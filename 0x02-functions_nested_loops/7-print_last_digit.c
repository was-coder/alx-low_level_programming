#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: parameter to check
 *
 * Return: return 0 as success
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
