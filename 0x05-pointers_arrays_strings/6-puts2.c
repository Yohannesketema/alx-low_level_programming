#include <stdio.h>
#include <string.h>
/**
 * puts2 - print the character of a string
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
		printf("%c\n", str[i]);
}
