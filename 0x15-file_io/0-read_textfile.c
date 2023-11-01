#include "main.h"
#include <stdlib.h>
#include <unistd.h> /*used for input output process management*/
#include <sys/types.h> /*used to define datatypes i.e ssize_t*/
#include <sys/stat.h>
#include <fcntl.h> /*used for flags*/

/**
 * read_textfile - this function reads a file and prints it to the POSIX stdo
 * @filename: the pointer to the filename to be read
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters to printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;/*declaring an open file*/
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) *letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	lenr = read(file_d, buffer, letters);
	close(file_d);
	if (lenr ++ -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
