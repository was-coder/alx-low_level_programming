#include <stdio.h>

/**
 * main - Entry Point
 * Description: A program that prints all possible
 * Different combinations of two digits
 * Return: return 0 as success
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i < '10'; i++)
	{
		for (j = i + 1; j < '10'; j++)
		{
			putchar(i);
			putchar(j);

			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
