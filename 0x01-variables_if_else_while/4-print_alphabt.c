#include <stdio.h>
/**
 * main - print lowercase letter except q & e
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	if (c == 'e' || c == 'q')
	{
	continue;
	}
putchar(c);
	}
	putchar('\n');
	return (0);
}
