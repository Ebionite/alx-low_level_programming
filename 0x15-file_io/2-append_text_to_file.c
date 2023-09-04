#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends text just at the end of a file.
 * @filename: A pointer that to exact name of the file.
 * @text_content: a string to add up to the very end of the file.
 *
 * Return: If function fails or filename is declared NULL - -1.
 *         If file does not exist the very user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
