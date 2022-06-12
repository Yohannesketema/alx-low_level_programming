#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *@a: takes value
 * Return: the last digit
 */
int print_last_digit(int a)
{
	int l_d = a % 10;

	if (l_d < 0)
		l_d *= -1;
	_putchar(l_d + '0');
	return (l_d);
}
