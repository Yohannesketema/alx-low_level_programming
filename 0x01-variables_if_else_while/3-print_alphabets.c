#include <stdio.h>
/**
 * main - print upper and lower case letters
 *
 * Return: 0
 */

int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
