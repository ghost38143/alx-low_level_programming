#include "main.h"
/**
 * append_text_to_file - this function appends a text to afile
 * @filename: the file pointer to append to
 * @text_content: the content of file
 * Return: always success 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;/**calculate the length of the text conetent*/
		rwr = write(file_d, text_content, nletters);
		/*will be attached at the end of file*/
		if (rwr == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
