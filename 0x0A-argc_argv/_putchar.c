#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Parameter passed
 *
 * Return: 1 as success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
