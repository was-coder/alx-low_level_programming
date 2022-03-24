#include "main.h"

/**
 * reverse_array - reverse array content
 * @a: an array of integers
 * @n: the number of element to swap
 *
 * Return: 0 as success
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
