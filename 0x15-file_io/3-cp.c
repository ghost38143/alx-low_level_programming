#include "main.h"
void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - function copies the constant of one file to another
 * @argc: argument count
 * @argv: argument passed
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	/*n_read - tracks the number of bytrs read*/
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	/*this bitmask for the permisions granted to user , group and others*/
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "usage: cp file_from file to \n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);/*open src in read only mode*/
	check_IO_stat(src, -1, argv[1], 'O');/*chack status of open operation*/
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');/*for close operationn*/
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * check_IO_stat - funct checks if a file can be opened or closed
 * @stat: file description of file to be opened
 * @filename: name of file
 * @mode: closing or opening
 * @fd: file descriptor
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", filename);
		exit(99);
	}
}
