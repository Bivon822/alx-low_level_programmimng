#include "main.h"

/**
 * main - print out main char by char
 *Descrption: uses the main header file
 * Return: Always 0 success
 */
int main(void)
{
	char str[] = "_putchar";

	int p;

	for (p = 0; str[p]; p++)
	{
		_bivochar(str[p]);
	}
	_bivochar('\n');
return (0);
}
