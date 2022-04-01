#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: pointer to array of arguments
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
