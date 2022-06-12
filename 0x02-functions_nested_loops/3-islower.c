#include "main.h"
/**
 * _islower - checks if the value is lowercase
 *@c: takes values from 97 - 122
 * Return: 1 & 0
 */
int _islower(int c)
{
	c = 97;
	if (c > 96 && c <= 122)
		return (1);
	else
		return (0);
}
