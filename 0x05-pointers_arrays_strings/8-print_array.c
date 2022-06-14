#include <stdio.h>
/**
 * print_array - print array elements
 * @a: array
 * @n: element index
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
	putchar('\n');
}
