#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: holds string characters
 */
void print_rev(char *s)
{
	while (*s)
	{
		printf("%c", *s--);
	}
	printf("\n");
