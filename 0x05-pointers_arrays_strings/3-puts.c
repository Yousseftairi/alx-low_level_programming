#include "main.h"

/**
 * _puts - this script prints a giving string .
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
