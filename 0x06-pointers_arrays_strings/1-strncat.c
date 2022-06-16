#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: 1 string
 * @src: 2 string
 * @n: string count
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int d_l = 0;

	while (dest[i++])
		d_l++;
	for (i = 0; src[i] && i < n; i++)
		dest[d_l++] = src[i];
	return (0);
}
