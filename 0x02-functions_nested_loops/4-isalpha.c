#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter passed to check
 *
 * Return: return 0 as success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
