#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void fibonacci()
{
	unsigned long long int sum = 0;
	long a, b, tmp, max;

	tmp = 0;
	printf("Hello, enter the maximum number\n");
	scanf("%ld", &max);
	printf("Please enter the two first numbers\n");
	scanf("%ld %ld", &a, &b);

	while (tmp < max)
	{
		tmp = a + b;
		a = b;
		b = tmp;

		if (tmp % 2 == 0)
		{
		sum = sum + tmp;
		}
	}
	printf("%lld", sum);
	printf("\n");
}

int main(void)
{
       	fibonacci();
	return (0);
}
