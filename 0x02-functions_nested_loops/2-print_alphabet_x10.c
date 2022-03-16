#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 * Return: return 0 as success
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
