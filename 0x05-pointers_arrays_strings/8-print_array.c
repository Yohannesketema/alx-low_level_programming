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
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	putchar('\n');
}
