#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
