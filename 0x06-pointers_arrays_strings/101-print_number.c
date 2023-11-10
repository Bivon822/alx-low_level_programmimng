#include "main.h"

/**
 * print_number - prints an intager
 * @n: an integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int p;

	p = n;

	if (n < 0)
	{
		_bivochar('-');
		p = -n;
	}
	if (p / 10 != 0)
	{
		print_number(p / 10);
	}
	_bivochar((p % 10) + '0');
}
