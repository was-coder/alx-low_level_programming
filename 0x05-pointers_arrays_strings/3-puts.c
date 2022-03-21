#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: parameter passed
 *
 * Return: 0 as success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
