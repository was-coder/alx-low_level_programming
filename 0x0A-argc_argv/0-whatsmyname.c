#include <stdio.h>

/**
 * main - Prints name
 * @argc: argument counter
 * @argv: pointer to array of arguments
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
