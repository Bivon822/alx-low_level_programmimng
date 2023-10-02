#include <stdio.h>

/**
 * sum_even_fibanacci - finds and print the sum of even
 * @x: passes the first arguement
 * @y: passes the second arguement
 * Return: The sum of even values
 */
int sum_even_number()
{
	unsigned long long int sum = 0;
	long tmp, max, x, y;

	tmp = 0;
	printf("Enter the maximum number in the fibonacci sequence\n");
	scanf("%ld", &max);
	printf("Hello, Enter the first two numbers of fibonacci sequence\n");
	scanf("%ld\n %ld", &x, &y);
	while (tmp < max)
	{
		tmp = x + y;
		x = y;
		y = tmp;
		if (tmp % 2 == 0)
		{
			sum = sum + tmp;
		}
	}
	return (sum);
}
int main(void)
{
	unsigned long long r;
	r = sum_even_number(1, 2);
	printf("%lld\n", r);
	return (0);
}
