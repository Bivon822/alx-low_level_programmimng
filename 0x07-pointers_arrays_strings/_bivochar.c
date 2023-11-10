#include <unistd.h>

/**
 * _bivochar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _bivochar(char c)
{
	return (write(1, &c, 1));
}
