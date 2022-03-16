#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: parameter to check
 *
 * Return: return 0 as success
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	else
	{
		_putchar('0' + (n % 10));
	}
	return (n % 10);
}
