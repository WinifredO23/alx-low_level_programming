#include <stdlib.h>
#include <stdio.h>
/**
 * is_space - Checks if a character is a space, tab, or newline.
 * @c: The character to check.
 *
 * Return: 1 if character is a space, tab, or newline; 0 otherwise.
 */
int is_space(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n'));
}
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int c = 0;
	int i = 0;

	while (str[i] != '\0')
	{
	while (is_space(str[i]))
	{
	i++;
	}
	if (str[i] != '\0')
	{
	c++;
	while (!is_space(str[i]) && str[i] != '\0')
	i++;
	}
	}
	return (c);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int num_words;
	char **words;
	int index;
	int i;
	int s;
	int length;
	int j;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	index = 0;
	i = 0;

	while (str[i] != '\0')
	{
		while (is_space(str[i]))
		{
			i++;
		}
		if (str[i] != '\0')
	{
	s = i;
	while (!is_space(str[i]) && str[i] != '\0')
	i++;
	length = i - s;
	words[index] = (char *)malloc((length + 1) * sizeof(char));
	if (words[index] == NULL)
	{
	for (j = 0; j < index; j++)
	free(words[j]);
	free(words);
	return (NULL);
	}
	for (j = 0; j < length; j++)
	words[index][j] = str[s + j];
	words[index][length] = '\0';
	index++;
	}
	}
	words[num_words] = NULL;
	return (words);
}
