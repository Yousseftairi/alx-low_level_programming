#include "main.h"

/**
 * puts_half - this prins half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int i;
	int len;
	int half;

	len = 0;
	i = 0;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		half = len / 2;

	else
		half = (len + 1) / 2;

	for (i = half; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
