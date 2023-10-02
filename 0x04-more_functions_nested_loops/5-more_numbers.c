#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0, c = 0; b <= 14; b++, c++)
		{
			if (b > 9)
			{
				_bivochar('1');
				c = b % 10;
			}
			_bivochar(c + '0');
		}
		_bivochar('\n');
	}
}
