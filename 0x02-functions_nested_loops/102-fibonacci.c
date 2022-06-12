#include <stdio.h>
/**
 * main - prints the firdst 50 febonacci series
 *
 * Return: 0
 */
int main(void)
{
	int c;
	unsigned long i = 0, j = 1, add;

	for (c = 0; c < 50; c++)
	{
		add = i + j;
		printf("%lu", add);
		i = j;
		j = add;
		if (c == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
