#include <stdio.h>
/**
* main - this script prints the alphabet in lower and upper case
* Return: 0
*/
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	for (x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
