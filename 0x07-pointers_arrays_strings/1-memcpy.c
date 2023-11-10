#include "main.h"

/**
 * _memcpy - copies n bytes from a memory area
 * @dest: 1st pointer
 * @ src: 2nd pointer
 * n: size of byte to be copied
 * Returns: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
