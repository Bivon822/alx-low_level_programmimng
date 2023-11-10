#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 * Return: *str
 */
char *leet(char *str)
{
	int x = 0;
	int y = 0;
	char decoder[] = "AaEeOoTtLl";
	char encoder[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; decoder[y] != '\0'; y++)
		{
			if (str[x] == decoder[y])
			{
				str[x] = encoder[y];
			}
		}
	}
	return (str);
}
