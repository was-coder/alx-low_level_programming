#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: 0 as success
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int num = 0;

	while (num == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;

		num = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (num);
}
