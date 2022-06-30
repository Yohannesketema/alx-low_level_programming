#include "main.h"
/**
 * factorial - calculate the factorial of a number
 * @n: integer value
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
