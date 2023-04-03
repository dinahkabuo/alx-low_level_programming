#include <string.h>
/**
 * _memset - fills a block of memory with specific value
 * @s: pointer to memory are
 * @b: char for constant byte
 * @n: number of bytes
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
