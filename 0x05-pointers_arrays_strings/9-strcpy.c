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

	while (*(src + i) != '\0')
	{
		*(dest + 1) = *(src + 1);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

