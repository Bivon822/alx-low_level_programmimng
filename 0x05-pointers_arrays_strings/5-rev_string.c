#include "main.h"
#include <stdio.h>

/**
 * rev_string(char *s);
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int x, y;
	char *tmp;

	x =0;
	while (s[x] != '\0')
	{
		 tmp[x] = s[x];
		x++;
	}
	x = x - 1;
	y = 0;
	while (x >= 0)
	{
		s[x] = tmp[y];
		--x;
		++y;
	}
}
