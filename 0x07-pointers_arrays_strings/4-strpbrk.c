#include <string.h>
/**
 * _strpbrk - locates the first occurence of bytes in a string
 * @s: string
 * @accept: set of bytes
 * Return: char *
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
