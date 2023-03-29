#include "main.h"

/**
 * puts2 - this prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
