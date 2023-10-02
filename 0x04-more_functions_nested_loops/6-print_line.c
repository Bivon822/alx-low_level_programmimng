#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n:the number of times the character should be printed
 * Return: void
 */
void print_line(int n)
{
	int a;

	a = 0;
	while(a < n)
	{
		if (n <= 0)
			break;
		_bivochar('_');
		a++;
	}
	_bivochar('\n');
}
