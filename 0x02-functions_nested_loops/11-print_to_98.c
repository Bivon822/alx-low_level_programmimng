#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n:passes the value
 * Return: void
 */
void print_to_98(int n)
{
	int m;

	m = 98;
	if (n > m)
	{
		for (; n >= m; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
	if (n < m)
	{
		for (; n <= m; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
	if (n == m)
		printf("%d ", n);
	printf("\n");
}
