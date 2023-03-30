#include <string.h>
/**
 * _strncat - concatenates strings based on n bytes
 * @dest: string to concatenate
 * @src: string to be added
 * @n: number of bytes
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
