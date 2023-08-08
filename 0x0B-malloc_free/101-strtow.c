#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_space - locates a by marking end.
 * @c: The character to check.
 * Return: 1 if character is a space, tab, or newline; 0 otherwise.
 */
int is_space(char *c)
{
	int a = 0, l = 0;

	while (*(c + a) && *(c + a) != ' ')
	{
		l++;
		a++;
	}
	return (l);
}
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int a = 0;
	int num_words = 0;
	int l = 0;

	for (a = 0; *(str + a); a++)
		l++;
	for (a = 0; a < l; a++)
	{
	if (*(str + a) != ' ')
	{
		num_words++;
		a += is_space(str + a);
	}
	}
	return (num_words);
}
/**
 * strtow - Splits a string into words
 * @str: Input string
 * Return: Pointer to array of strings (words)
 */
char **strtow(char *str)
{
	int num_words, a, i, j, len;
	char **words;

	a = 0;

	if (str == NULL || str[0]  == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
	return (NULL);

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (str[a] == ' ')
			a++;
		len = is_space(str + a);
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
		{
			words[i][j] = str[a];
			a++;
		}

		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}

