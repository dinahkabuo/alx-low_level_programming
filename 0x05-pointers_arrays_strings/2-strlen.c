#include <string.h>
#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
