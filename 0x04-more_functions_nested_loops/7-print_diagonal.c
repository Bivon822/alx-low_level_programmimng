#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should 
 * Return: void 
 */
void print_diagonal(int n)
{
	int a, b;

	for (b = 1; b <= n; b++)
	{
		if (n <= 0)
			break;
		for (a = 1; a <= b; a++)
		{
			_bivochar(' ');
		}
		_bivochar('\\');
		_bivochar('\n');
	}
}
