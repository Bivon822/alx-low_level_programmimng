#include "main.h"

/**
 * _islower - checks for lowercase character or not 
 *@c:the character to be checked
 * Return: 1 if the character is lowercase 0 is its not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

