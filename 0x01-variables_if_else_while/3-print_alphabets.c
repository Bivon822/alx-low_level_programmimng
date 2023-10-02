#include <stdio.h>
/**
 * main - prints alphabet in upper and lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for(c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	for(c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
return(0);
}
