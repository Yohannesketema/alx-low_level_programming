#include "main.h"
int get_sqrt(int x, int root);
/**
 * _sqrt_recursion - gives the natural square root of a number
 * @n: the number to be computed
 * Return: the natural square root or -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
/**
 * get_sqrt - find the the naturan square root of a number
 * @x: the number to be computed
 * @root: root to be tested
 * Return: the natural square root or -1
 */
int get_sqrt(int x, int root)
{
	if ((root * root) == x)
		return (root);
	if (root == x / 2)
		return (-1);
	return (get_sqrt(x, root + 1));
}
