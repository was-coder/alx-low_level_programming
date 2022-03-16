#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: return 0 as success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
