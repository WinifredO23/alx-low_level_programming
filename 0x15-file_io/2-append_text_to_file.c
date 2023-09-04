#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append (can be NULL).
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *f;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	f = fopen(filename, "a");
	if (f == NULL)
		return (-1);

	if (fprintf(f, "%s", text_content) < 0)
	{
		fclose(f);
		return (-1);
	}

	fclose(f);
	return (1);
}

