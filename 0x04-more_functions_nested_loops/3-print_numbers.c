#include "main.h"

/**
 * print_numbers - print numbers form 0 to 9
 * Return: 0 as success
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
		_putchar(i);

	_putchar('\n');
}
