#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - iterate through each argv to test if it's a number
 * @argv: A argv
 *
 * Return: 0 as success
 */

bool is_num(char *argv)
{
	int i = 0;

	for (i = 0; argv[i]; i++)
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
			return (0);
	}

	return (1);
}
