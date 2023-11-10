#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_bivochar(str[x]);
		}
	}
	_bivochar('\n');
}

