#include "main.h"
/**
 * create_file - this function creates a file
 * @filename: the filename
 * @text_content: ths content present in the file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int letters_count = 0;
	int rw_owner;

	if (!filename)/*check if a file or a string present in the arg*/
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/*trunc file to len zero if it already exist*/
	if (file_d == -1)
		return (-1);
	if (!text_content)
		text_content = "";/*this set text conent to an empty string*/
	while (text_content[letters_count])
	{
		letters_count++;
	}
	rw_owner = write(file_d, text_content, letters_count);
	if (rw_owner == -1)
		return (-1);
	close(file_d);
	return (1);/*thst is success*/
}
