#include "main.h"
#include <stdio.h>

/**
 * sum_of_multiple - computes and prints the sum of all 
 * of 3 or 5
 * @n: passess the value
 * Return: sum of multiples
 */
int sum_of_multiples(int m, int n)
{
	long int x, y, sum;

	y = 1024;
	x = 0;
	sum = 0;
	for (; x <= y; x++)
	{
		if (x % m == 0 || x % n == 0)
		{
			sum = sum + x;
			printf("%ld, ", x);
		}
	}
	return (sum);
}
