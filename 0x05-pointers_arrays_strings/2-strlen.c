#include <stdio.h>
#include <string.h>
/**
 * _strlen - return the length of a string
 * @s: points to a character
 * Return: the length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
