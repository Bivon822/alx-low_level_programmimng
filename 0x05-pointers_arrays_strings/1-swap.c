#include "main.h"

/**
 * swap_int - swaps the values of two intagers
 * @*a: the first value to be swaped
 * @*b: the second value to be swaped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
