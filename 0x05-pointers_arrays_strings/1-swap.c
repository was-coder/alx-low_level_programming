#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: 0 as success
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
