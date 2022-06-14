#include <stdio.h>
/**
 * puts_half - print half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int i = 0, len = 0, a;

	while (str[i++])
		len++;
	if ((len % 2) == 0)
		a = len / 2;
	else
		a = (len + 1) / 2;
	for (i = a; i < len; i++)
		putchar(str[i]);
	putchar('\n');
}
