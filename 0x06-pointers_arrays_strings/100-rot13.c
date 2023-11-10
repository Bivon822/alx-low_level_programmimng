#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: a pointer
 */
char *rot13(char *str)
{
	int x = 0;
	int y = 0;
	char decoder[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoder[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; decoder[y] != '\0'; y++)
		{
			if (str[x] == decoder[y])
			{
				str[x] = encoder[y];
				break;
			}
		}
	}
	return (str);
}
