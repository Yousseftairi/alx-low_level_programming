#include "main.h"
#include <stdio.h>
/**
 * reverse_array - this script reverses content of an array of integers
 * @a: pointer
 * @n: pointer
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	if (n % 2 != 0)
		k = n + 1;
	else
		k = n;
	for (i = 0; i < k / 2; i++)
	{
		j = a[i];
			a[i] = a[n - 1 - i];
				a[n - 1 - i] = j;
	}
}
