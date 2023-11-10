#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void fibbonacci()
{
	long a = 1;
	long b = 2;
	int c = 0;
	long tmp = 0;

	printf("%ld %ld, ", a, b);

		for (c = 0; c < 50; c++)
		{
			tmp = a + b;
			a = b;
			b = tmp;
			printf("%ld, ", tmp);
		}
		printf("\n");
}

int main(void)
{

	fibbonacci();
	return (0);
}
