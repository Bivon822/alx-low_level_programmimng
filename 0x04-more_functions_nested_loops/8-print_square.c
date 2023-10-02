#include "main.h"

/**
 * print_square - prints a square,followed by a new line
 * @size: the number of times # to be printed
 * Return: void
 */
void print_square(int size)
{
	int a, b = 1;

	for (a = 1; a <= size; a++)
	{
		if (size <= 0)
			break;
		for (b = 1; b <= size; b++)
		{
			_bivochar('#');
		}
		_bivochar('\n');
	}
}

