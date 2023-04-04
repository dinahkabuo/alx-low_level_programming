#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring in string
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
