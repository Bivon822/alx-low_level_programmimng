#include "main.h"

/**
 * puts_half - prints half of a string 
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int p, m, k;

	p = 0;
	while (str[p] !='\0')
	{
		p++;
	}
	m = p  / 2;
	while (str[m] !='\0')
	{
		_bivochar(str[m]);
		m++;
	}
	_bivochar('\n');
}
