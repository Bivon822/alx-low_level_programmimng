#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int x, y, z, m;

	for (x = '0'; x <= '2'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (y == '4')
				break;
			for (z = '0'; z <= '5'; z++)
			{
				for (m = '0'; m <= '9'; m++)
				{
					_bivochar(x);
					_bivochar(y);
					_bivochar(':');
					_bivochar(z);
					_bivochar(m);
					_bivochar('\n');
				}
			}
		}
	}
}
