#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string
 * @accept: the string to be compared
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (*s == accept[x])
				return (s);
			x++;
		}
		s++;
	}
	return (0);
}
