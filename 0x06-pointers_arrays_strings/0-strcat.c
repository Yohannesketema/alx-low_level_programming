#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatinate two strings
 * @dest: first string
 * @src: second string
 *  Return: dest
 */
char _strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (*dest);
}
