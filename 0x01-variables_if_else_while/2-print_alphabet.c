#include <stdio.h>

/**
*main - Entry Point
*Return: return 0 as success
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar("%c\n", letter);
		letter++
	}
	return (0);
}
