#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find.
 *
 * Return: Pointer to the beginning of the located substring in @haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	j = 0;
	while (haystack[i + j] == needle[j])
	{
	if (needle[j + 1] == '\0')
	return (&haystack[i]);
	j++;
	}
	if (*needle == '\0')
	return (haystack);
	}
	return (NULL);
}
