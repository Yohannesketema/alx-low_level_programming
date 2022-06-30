#include "main.h"
int strlen_wild(char *str);
void iterate(char **wstr);
char *postfix_match(char *str, char *pf);
/**
 * wildcmp - checs string to see if they are identical or not
 * @s1: first string
 * @s2: second string
 * Return: 1 if they are identical or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
/**
 * strlen - returns the length of the string while ignoring wild cards
 * @str: string value
 * Return: string length
 */
int strlen_wild(char *str)
{
	int l = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			l++;
		i++;
		l += strlen_wild(str + i);
	}
	return (l);
}
/**
 * iterate - iterate through astring up non - wild card character
 * @wstr: string value
 */
void iterate(char **wstr)
{
	if (**wstr == '*')
	{
		(*wstr)++;
		iterate(wstr);
	}
}
/**
 * postfix_match - checks if str matchs the postfix of anothe string
 * @str: the string tog to be matched
 * @postfix: the post fix value
 * Return: apointer to a null byte or un matched character
 */
char *postfix_match(char *str, char *postfix)
{
	int str_l = strlen_wild(str) - 1;
	int postfix_l = strlen_wild(postfix) - 1;

	if (*postfix == '*')
		iterate(&postfix);
	if (*(str + str_l - postfix_l) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}
