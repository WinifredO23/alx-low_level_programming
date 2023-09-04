#include "main.h"
/**
 * read_textfile - Read and print a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *f;
	ssize_t r_bytes;
	ssize_t w_bytes;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(f);
		return (0);
	}

	r_bytes = fread(buffer, sizeof(char), letters, f);
	if (r_bytes == -1)
	{
		free(buffer);
		fclose(f);
		return (0);
	}

	buffer[r_bytes] = '\0';

	w_bytes = printf("%s", buffer);
	free(buffer);
	fclose(f);
	if (w_bytes != r_bytes)
	{
		return (0);
	}
	return (w_bytes);
}
