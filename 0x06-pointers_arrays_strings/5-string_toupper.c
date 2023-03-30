#include "main.h"
#include <string.h>
/**
 * string_toupper - converts lowercase to uppercasr
 * @s: string to be converted
 * Return: char *
 */
char *string_toupper(char *s)
{
	int c;
	int 1, a;

	1 = strlen(s);
	for (a = 0; a < 1; a++)
	{
		c = *(s + a);
		if (c >= 97 && c <= 122)
		{
			c = c - 32;
		}
		*(s + a) = c;
	}
	return (s);
}
