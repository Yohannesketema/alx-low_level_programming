#include <stdio.h>
/**
 * print_to_98 - prints natural numbers to 98 starting from n
 * @n: user give value
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
}
