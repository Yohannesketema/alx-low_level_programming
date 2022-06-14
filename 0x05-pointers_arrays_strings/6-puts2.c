#include <stdio.h>
#include <string.h>
/**
 * puts2 - print the character of a string
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
		printf("%c\n", str[i]);
}
