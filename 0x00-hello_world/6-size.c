#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size  of long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long) sizeof(e));
	return (0);
}



