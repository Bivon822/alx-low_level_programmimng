#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @*s: returns the size of the string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int p;
        
	p = 0;
	while (s[p] != '\0')
	{
		++p;
	}
	return (p);
}
