#include <stdio.h>
/**
 * _strcpy - copy string
 * @src: string value
 * @dest: copying location
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

