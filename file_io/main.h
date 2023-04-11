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

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif	/* _MAIN_H_ */
