#include "main.h"
/**
 * _pow_recursion - computes the value if x raised by th power of y
 * @x: value to be raised
 * @y: the power
 * Return: x raised by the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
