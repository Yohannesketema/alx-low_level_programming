#include <stdio.h>
/**
 * main - prints all single digits
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}

