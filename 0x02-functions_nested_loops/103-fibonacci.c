#include <stdio.h>
/**
 * main - print the sum of even valued terms
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i = 0, j = 1, f_add;
	float t_add;

	while (1)
	{
		f_add = i + j;
		if (f_add > 4000000)
			break;
		if ((f_add % 2) == 0)
			t_add += f_add;
		i = j;
		j = f_add;
	}
	printf("%.0f\n", t_add);
	return (0);
}
