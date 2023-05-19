#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> /* To use size_t variable type */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H_ */
