#include "main.h"
#include <stdio.h>

/**
 * print_array -prints n elements of an array
 * @a: array
 * @n: number of elements of an array
 * Return: void
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d, ", a[p]);
	}
	printf("\n");
}
