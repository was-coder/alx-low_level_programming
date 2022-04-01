#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: A argv
 *
 * Return: true only if entire string is a number else false
 */

bool is_num(char *argvv)
{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}

	return (1);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
