#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: contains bytes
 * Return: number of bytes in initial segment which contains bytes from accept
 */
unsignes int _strapn(char *s, char *accept)
{
	unsigned int y = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				y++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (y);
			}
		}
		s++
	}
	return (y);
}
