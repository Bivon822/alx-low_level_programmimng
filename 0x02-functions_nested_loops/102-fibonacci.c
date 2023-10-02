#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - prints the first 50 fibonacci numbers
 * starting 1 and 2
 * main - checks the code
 * Return: Always 0.
 */
void print_fibonacci()
{
	unsigned long long int tmp;
	long int x, y, z, max;


	tmp = 0;
	printf("Enter the maximun number in the fibonacci sequence\n");
	scanf("%ld", &max);
	printf("Hello,please enter the first two numbers in the fibonacci sequence\n");
	scanf("%ld\n %ld", &x, &y);
	for (z = 2; z < max; z++)
	{
		tmp = x + y;
		x = y;
		y = tmp;
		printf("%lld, ", tmp);
	}
	printf("\n");
}
int main(void)
{
	print_fibonacci();
	return (0);
}
