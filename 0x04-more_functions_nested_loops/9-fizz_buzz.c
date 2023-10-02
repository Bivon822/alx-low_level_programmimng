#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100
 * but for multiples of 3 prints fizz and 5 prints buzz
 *main - checks the code
 * Return: void
 */
void fizz_buzz(int n)
{
	int a; 

	for (a = 1; a <= n; a++)
	{
		if (a % 3 != 0 || a % 5 != 0)
		{
			printf("%d, ", a);
		}
	        if (a % 3 == 0)
		{
			printf("Fizz");
		}
		if (a % 5 == 0)
		{
			printf("Buzz");
		}
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
	}
	printf("\n");
}
int main (void)
{
	fizz_buzz(100);
	return (0);
}
