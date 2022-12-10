#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file be created
 * @text_content: a NULL terminated string to write to the file
 * desc: if text_content is NULL, create an empty file
 *
 * Return: 1 on success else, -1 if failure i.e
 * (file can not be created, file can not be written, write “fails”)
 *         or if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}