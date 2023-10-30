#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: The name of the file to read
* @letters: The number of letters to read and print
*
* Return: The actual number of letters read and printed, 0 otherwise
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
	{
		free(text);
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);
	if (let == -1)
	{
		free(text);
		close(file);
		return (0);
	}

	w = write(STDOUT_FILENO, text, let);
	if (w == -1 || w != let)
	{
		free(text);
		close(file);
		return (0);
	}

	free(text);
	close(file);

	return (w);
}
