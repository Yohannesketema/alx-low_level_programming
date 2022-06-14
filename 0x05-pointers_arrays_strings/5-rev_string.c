#include <stdio.h>
#include <string.h>
/**
 * rev_string - print strings in reverse
 * @s : holds strings single character
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[i++])
		len++;
	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
