#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int w, x, y, z;

	for (w = '0'; w <= '6'; w++)
	{
		for (x = '0'; x <= '7'; x++)
		{
			for (y = '0'; y <= '8'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{

