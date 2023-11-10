#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: the buffer
 * @src: the string
 * @n: the number of bytes
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	 int p = 0;

	 while (p < n)
	 {
		 *(dest + p) = *(src + p);
		 ++p;
	 }
	 *(dest + (p + 1)) = '\0';
	 return (dest);
}

