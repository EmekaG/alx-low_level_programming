#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: the substring to be located
 * @needle: the substring to be searched
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		str1 = str1 + 1;
	}
	return (0);
}
