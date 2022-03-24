#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: parameter passed
 *
 * Return: 1 as success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
