#ifndef _MAIN_H_
#define _MAIN_H_

/*
 * Desc: Header file containing prototypes for all functions
 */

#include <stdlib.h>	/* To use NULL */
#include <sys/types.h>	/* To use open */
#include <sys/stat.h>	/* To use open */
#include <fcntl.h>	/* To use open */
#include <unistd.h>	/* To use close */
#include <stdio.h>	/* To use dprintf */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif	/* _MAIN_H_ */
