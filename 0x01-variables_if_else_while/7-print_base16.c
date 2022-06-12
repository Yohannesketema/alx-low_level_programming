#include <stdio.h>
/**
 * main - print hexadecimal digits 0-f
 *
 * Return: 0
 */
int main(void)
{
	int a;
	char c;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
