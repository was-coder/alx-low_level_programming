#include <stdio.h>

/**
 * main - Entry Point
 * Description: prints single digit numbers seperated by comma and space
 * Return: return 0 as success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar("%i, ", num);
		if (num == 9)
			putchar("%i", num);
		num++;
	}

	putchar('\n');

	return (0);
}
