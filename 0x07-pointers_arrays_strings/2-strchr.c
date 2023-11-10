#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a pointer to s
 * @c: the character to be located
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s !='\0')
	{
		if (*s == c)
			return s;
		if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (0);
}
