#include "main.h"

/**
 * main - prints alphabets in lowercase
 * Return: return 0 as success
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

	return (0);
}
