#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * ahhh! Crazy task! Expand your knowledge
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0;
	int l2 = 0;
	int c = 0;
	int i, j, k;
	int r_index = 0;

	while (n1[l1] != '\0')
	{
	l1++;
	}
	while (n2[l2] != '\0')
	{
	l2++;
	}
	if (l1 >= size_r || l2 >= size_r)
	{
	return (0);
	}
	i = l1 - 1;
	j = l2 - 1;

	while (i >= 0 || j >= 0 || c > 0)
	{
	int s = c;

	if (i >= 0)
	{
	s += n1[i] - '0';
	i--;
	}
	if (j >= 0)
	{
	s += n2[j] - '0';
	j--;
	}
	c = s / 10;
	s = s % 10;
	if (r_index < size_r - 1)
	{
	r[r_index] = s + '0';
	r_index++;
	}
	else
	{
	return (0);
	}
	}
	r[r_index] = '\0';
	for (k = 0; k < r_index / 2; k++)
	{
	char t = r[k];
	r[k] = r[r_index - k - 1];
	r[r_index - k - 1] = t;
	}
	return (r);
}
