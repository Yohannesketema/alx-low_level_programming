#include <stdio.h>
/**
 * _puts - prints string
 * @str : hold string value
 * no return
 */
void _puts(char *str)
{
	while (*str)
	{
	printf("%c", *str++);
	}
	printf("\n");
}
