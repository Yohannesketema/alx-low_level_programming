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
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			a = i * j;
			if (a <= 9)
				_puchar(' ');
			else
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
