#include "main.h"
/**
 * print_sign - print + for posetive, 0 for zero & - for negative
 *
 * @n: takes integer value
 * Return: 1,0 & -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		return (0);
	}
	_putchar('\n');
}
