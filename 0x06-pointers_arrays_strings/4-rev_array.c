#include "main.h"

/**
 * reverse_array - reverses the content of an array of an intagers
 * a: array
 * @n: size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x = 0;

	while (x <= n)
	{
		a[x] = a[n];
		++x;
		--n;
	}
}
