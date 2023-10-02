#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_bivochar(r + '0');
	r = _islower('o');
	_bivochar(r + '0');
	r = _islower(108);
	_bivochar(r + '0');
	_bivochar('\n');
	return (0);
}
