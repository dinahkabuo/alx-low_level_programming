#include "main.h"
/**
 * _strspn - function that gets length of prefix substring
 *  @s: initial segment
 *  @accept: input
 *  Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
