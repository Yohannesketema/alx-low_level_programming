#include <stdio.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: holds string characters
 */
void print_rev(char *s)
{
	int length = strlen(s);

	for (index = length - 1; index >= 0; index--)
	{
		putchar(s[index]);
	}
	printf("\n");
}
