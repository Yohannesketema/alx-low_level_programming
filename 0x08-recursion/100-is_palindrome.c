#include "main.h"
int find_strlen(char *s);
int check_palindrome(char *s, int l, int i);
/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: string to be checked
 * Return: 1 i palindrome or 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, l, i));
}
/**
 * find_strlen - return the length of a string
 * @s: string to be measured
 * Return: length of string
 */
int find_strlen(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += find_strlen(s + l);
	}
	return (l);
}
/**
 * check_palindrome - check if astring is palindrome
 * @s: string value
 * @l: string length
 * @i: string index to be checked
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (check_palindrome(s, l, i + 1));
	return (0);
}
