#include <stdio.h>
/**
 * main - print lower case alphabet
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
