#include "main.h"

/**
 * main - to check the code.
 *
 * Return: always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_bivochar(',');
	_bivochar(' ');
	_bivochar(r + '0');
	_bivochar('\n');
	r = print_sign(0);
	_bivochar(',');
	_bivochar(' ');
	_bivochar(r + '0');
	_bivochar('\n');
	r = print_sign(0xff0);
	_bivochar(',');
	_bivochar(' ');
	_bivochar(r + '0');
	_bivochar('\n');
	r = print_sign(-1);
	_bivochar(',');
	_bivochar(' ');
	_bivochar(r + '0');
	_bivochar('\n');
	return (0);
}
