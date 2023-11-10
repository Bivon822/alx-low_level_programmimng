#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: the main string
 * @needle: the substring to be locatedin the main string
 * Return: a pointer to to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	while (*haystack != '\0')
	{
		x = 0;
		while (needle[x] != '\0')
		{
			if (*haystack == *needle)
				return haystack;
			x++;
		}
		haystack++;
	}
	return (0);
}
