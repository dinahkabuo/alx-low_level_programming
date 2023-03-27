#include "main.h"
#include <string.h>
/**
 * print_rev - prints reverse of string
 * @s: string to be reversed
 * Return: nothing (void)
 */
void print_rev(char *s)
{
	int 1;
	int a;

	1 = strlen(s);
	for (a = 1 - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
