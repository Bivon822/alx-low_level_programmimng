#include "main.h"

/**
 * _abs - computes an absolute value of an intager
 * @n: is the value to be computed
 * Return: The absolute value of an intager
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
		return (0);
}
