#include "main.h"

/**
 * main - check the code.
 *
 * Return: always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_bivochar(r + '0');
	r = _isalpha('o');
	_bivochar(r + '0');
	r = _isalpha(108);
	_bivochar(r + '0');
	r = _isalpha(';');
	_bivochar(r + '0');
	_bivochar('\n');
	return (0);
}
