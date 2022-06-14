#include <stdio.h>
/**
 * swap_int - swap to integer values
 * @a: holds th first value
 * @b: holds the second number
 *
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
