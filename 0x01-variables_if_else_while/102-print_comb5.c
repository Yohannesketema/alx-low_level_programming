#include <stdio.h>
/**
 * main - print combnation of two two digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a + '0');
			putchar(a + '0');
			putchar(' ');
			putchar(b + '0');
			putchar(b + '0');
			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

