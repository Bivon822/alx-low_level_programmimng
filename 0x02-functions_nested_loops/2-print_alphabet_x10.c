#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_bivochar(c);
		}
		_bivochar('\n');
	}
}
