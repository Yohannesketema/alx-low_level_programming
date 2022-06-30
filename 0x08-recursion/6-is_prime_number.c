#include "main.h"
int sumdigit(int n);
/**
 * _is_prime_number - checks if the number is prime or not
 * @n: the number to be checked
 * Return: 1 if the input is prime or 0 if the input is not prime
 */
int _is_prime_number(int n)
{
	if (n % 10 == 0 || n % 10 == 2 || n % 10 == 4 || n % 10 == 6 || n % 10 == 8 || sumdigit(n) / 3 == 0 || n % 10 == 5)
		return (0);
	else
		return (1);
}
/**
 * sumdigit - sum the given number digits
 * @n: the given number
 * Return: summetion of the digits
 */
int sumdigit(int n)
{
	if (n == 0)
		return (0);
	return ((n % 10) + sumdigit(n / 10));
}
