#include "main.h"
/**
 * print_rev - this prints the giving string in reverse.
 * @s: string to reverse.
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
