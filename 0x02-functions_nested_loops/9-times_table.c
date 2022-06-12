#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;
			if (a <= 9)
				_putchar(' ');
			else
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
