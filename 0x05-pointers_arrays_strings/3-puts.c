#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
	{
		_bivochar(str[p]);
		++p;
	}
	_bivochar('\n');
}
