#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int m, n, p, x, y;

	for (m = 0; m <= 9; ++m)
	{
		for (n = 0; n <= 9; ++n)
		{
			p = m * n;
			if (p >= 0)
			{
				_bivochar(',');
				if (p >= 0 && p <= 9)
				{
					_bivochar(' ');
				}
				_bivochar(' ');
			}
			x = (p / 10 + '0');
			y = (p % 10 + '0');
			if (p > 9)
			{
				_bivochar(x);
			}
			_bivochar(y);
		}
		_bivochar('\n');
	}
}
