#include <stdio.h>
/**
 * _puts - prints string
 * @str : hold string value
 * no return
 */
void _puts(char *str)
{
	int i = 0;

	while (*str++)
	{
	printf("%c", *str);
	i++;
	}
	printf("\n");
}
