#include <stdio.h>

/**
 * main - Entry Point
 * Return: return 0 as success
 */

int main(void)
{
	int num = '0';

	while (num < '10')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
