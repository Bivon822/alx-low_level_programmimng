#include "main.h"

/**
 * print_rev - prints a string in reverse followed
 * by new line
 * @s: the string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	y = x;
	while (s[y]  >= 0)
	{
		_bivochar(s[y]);
		--y;
	}
	_bivochar('\n');
}
