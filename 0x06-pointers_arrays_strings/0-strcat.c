#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest:the string to append to
 * @src: the string
 * Return: a pointer to a string dest
 */
char *_strcat(char *dest, char *src)
{
	int p = 0;
	int m = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[m] !='\0')
	{
		dest[p] = src[m];
		++p;
		++m;
	}
	dest[p + 1] = '\0';
	return (dest);
}
