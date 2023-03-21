#include <stdio.h>
/**
* main - this script prints 0 to 9 and a to f using putchar
* Return: 0
*/
int main(void)
{
	int x;
	char y;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
	}
	for (y = 'a' ; y < 'g' ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

