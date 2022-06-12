#include <stdio.h>
/**
 * main - print the ummetion of multiple of 3 & 5 except 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, add = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			add += i;
	}
	printf("%d\n", add);
	return (0);
}
