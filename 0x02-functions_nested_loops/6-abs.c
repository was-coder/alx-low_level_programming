#include "main.h"

/**
 * _abs - compute absolute value
 * @n: parameter to check
 *
 * Return: return 0 as success
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
