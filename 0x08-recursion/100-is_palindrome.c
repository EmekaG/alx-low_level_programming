#include "main.h"

int strlength(char *s);
int palindrome(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * strlength - Returns the lenght of a string
 * @s: the string to be measured
 *
 * Return: string length
 */
int strlength(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + strlength(s + 1);
	}

	return (len);
}

/**
 * palindrome - if a string is a palindrome
 * @s: the string to be checked
 * @len: the length
 * @i: the indication of the string to be checked
 *
 * Return: 1 if string is a palindrome otherwise 0
 */
int palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	else if (s[i] == s[len - i - 1])
		return (palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - if string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if string is a palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = strlength(s);

	if (!(*s))
		return (1);

	return (palindrome(s, len, i));
}
