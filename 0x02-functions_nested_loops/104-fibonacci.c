#include <stdio.h>
/**
 * main - print first 98 fabonacci
 *
 * Return: 0
 */
int main(void)
{
	int c;
	unsigned long i = 0, j = 1, add;

	for (c = 0; c < 98; c++)
	{
		add = i + j;
		printf("%lu, ", add);
		i = j;
		j = add;
	}
	return (0);
}
