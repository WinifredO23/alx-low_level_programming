#include "main.h"
#include <string.h>
int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}

/**
 * is_palindrome_recursive - Recursive helper function.
 * @s: The input string to be checked.
 * @start: The starting index of the current substring.
 * @end: The ending index of the current substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	return (1);

	if (s[start] != s[end])
	return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
