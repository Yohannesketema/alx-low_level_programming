#include "main.h"
/**
 * _isalpha - checks wether letter or not
 * @c: takets value and return 1 or 0
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
