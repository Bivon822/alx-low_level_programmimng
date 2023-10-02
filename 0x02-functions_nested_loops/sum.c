#include "main.h"
#include <stdio.h>

/** sum - add two numbers
 *
 * Return: the sum 
 */
int sum(void)
{
	int a, b, result;
	printf("enter the two numbers: \n");
	scanf("%d%d", &a, &b);
	result = a + b;
	printf("sum: %d\n", result);
	return (0);
}
