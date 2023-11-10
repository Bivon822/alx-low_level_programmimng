#include "main.h"
#include <stdio.h>

/**
 * cap_string - captilizes all words of a string
 *
 * Return: a pointer to the string
 */
char *cap_string(char *str)
{
       	int x = 0;
	int z = 0;
        char y[] = " \t\n.;,!?\"(){}";

        for (z = 0; str[z] != '\0'; z++)
        {
                if (str[0] >= 97 && str[0] <= 122)
                {
                        str[0] = str[0] - 32;
                }
                for (x = 0; y[x] != '\0'; x++)
                {
                        if (str[z] == y[x] && str[z + 1] >= 97 && str[z + 1] <= 122)
                        {
                                str[z + 1] = str[z + 1] -32;
                        }
                }
        }
        return (str);
}
