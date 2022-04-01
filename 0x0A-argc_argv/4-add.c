#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: A argv
 *
 * Return: 0 as success
 */

bool is_num(char *argvv)
{
	int i = 0;

	for (i = 0; argvv[i]; i++)
	{
		if (!(argvv[i] >= '0' && argvv[i] <= '9'))
			return (0);
	}

	return (1);
}
