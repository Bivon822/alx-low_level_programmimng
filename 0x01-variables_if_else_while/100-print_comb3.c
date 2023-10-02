#include <stdio.h>

/**
 * main - prints all possible diffeerent combination of two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int b, c;

	for (b = '0'; b <= '8'; b++)
	{
		for (c = '1'; c <= '9'; c++)
		{
			if (b == c || b > c)
				continue;
			putchar(b);
			putchar(c);
			if (b != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
