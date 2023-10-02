#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table,starting with 0.
 * @n: passes the value
 * Return:void
 */
void print_times_table(int n)
{
	int x, y, z;

	for (x = 0; x <= n; ++x)
	{
		if (n > 15 || n < 0)
			break;
		for ( y = 0; y <= n; ++y)
		{
			z = x * y;
			if (z < 10)
			{
				printf(" ");
			}
			printf("%d, ", z);
		}
		printf("\n");
	}
}
