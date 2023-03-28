#include "main.h"
#include <string.h>
/**
  * puts2 - prints the even starting from the
  * first character
  * @str: input string
  * Return: nothing (void)
  */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
