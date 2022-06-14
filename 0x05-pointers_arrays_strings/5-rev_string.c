#include <stdio.h>
#include <string.h>
/**
 * rev_string - print strings in reverse
 * @s : holds strings single character
 */
void rev_string(char *s)
{
	int len = strlen(s), i;

	for (i = len - 1; i != -1; i--)
		putchar(s[i]);
	putchar('\n');
}
