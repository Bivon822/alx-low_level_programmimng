#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number to be checked
 * Return: 1 if n is greater than zero
 * and 0 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_bivochar('+');
		return (1);
	}
	else if (n < 0)
	{
		_bivochar('-');
		return (-1);

	}
	else
	{
		_bivochar('0');
		return (0);
	}
}
