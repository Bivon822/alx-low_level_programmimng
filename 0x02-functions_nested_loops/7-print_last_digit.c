#include "main.h"

/**
 * print_last_digit -prints the last digit of a number
 * @n:the passed number
 * Return: The last digit number
 */
int print_last_digit(int n)
{
	int last_d;

	last_d = n % 10;
	if (last_d < 0)
	{
		last_d *= -1;
	}
	_bivochar('0' + last_d);
return (last_d);
}
