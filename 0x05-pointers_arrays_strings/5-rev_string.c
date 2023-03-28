#include <string.h>
/**
 * rev_string - makes the string reversed
 * @s: string to be reversed
 * Return: nothing (void)
 */
void rev_string(char *s)
{
	int 1;
	int a;
	char *start;
	char *end;
	char ch;

	1 = strlen(s);
	start = s;
	end = s + 1 - 1;
	for (a = 0; a <= (1 - 1) / 2; a++)
	{
		ch = *end;
		*end = *start;
		*start = ch;

		start++;
		end--;
	}
}
