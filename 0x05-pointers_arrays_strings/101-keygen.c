#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random password
 *
 * Return: 0
 */
int main(void)
{
	char s;
	int p;

	srand(time(0));
	while (p <= 2645)
	{
		s = rand() % 128;
		p += s;
		putchar(s);
	}
	putchar(2772 - p);
	return (0);
}
