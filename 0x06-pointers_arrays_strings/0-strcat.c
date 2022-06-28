#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatinate two strings
 * @dest: first string
 * @src: second string
 *  Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, l = 0;

	while (dest[i++])
		l++;
	for (i = 0; src[i]; i++)
		dest[l++] = src[i];
	return (*dest);
}
