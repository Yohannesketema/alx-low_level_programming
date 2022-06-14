#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: holds string characters
 */
void print_rev(char *s)
{
	int length = 0, index;

	while (s[index++])
		length++;
	for (index = length - 1; index >= 0; index--)
	{
		putchar(s[index]);
	}
	printf("\n");
}
