#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Return: return 0 as success
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
