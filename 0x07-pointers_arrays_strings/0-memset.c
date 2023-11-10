#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory 
 * pointed to by s with the constant byte b
 * @b: costant byte
 * @s: pointer to a memory area
 * @n: the size of the byte to be filled
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return(s);
}
