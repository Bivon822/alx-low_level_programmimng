#include "main.h"

/**
 * *_strncat(char *dest, char *stc, int n) - concatenates two strings
 * @*dest:the string to be concatenated
 * @*src: the string
 * @n: the value
 * Return: a pointer to the resulting
 */
char *_strncat(char *dest, char *src, int n)
{
	int p = 0;
	int m = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (m < n)
	{
		dest[p] = src[m];
		++p;
		++m;
	}
	dest[p + 1] ='\0';
	return (dest);
}
