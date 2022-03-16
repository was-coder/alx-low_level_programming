#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * Return: return 0 as success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
