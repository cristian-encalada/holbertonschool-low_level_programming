# C - File I/O
## Learned Topics
### General
* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators
## Requirements
### General
* Allowed editors: ``vi``, ``vim``, ``emacs``
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
* All your files should end with a new line
* A ``README.md`` file, at the root of the folder of the project
* There should be no errors and no warnings during compilation
* Your code should use the ``Betty`` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are ``malloc``, ``free`` and ``exit``. Any use of functions like ``printf``, ``puts``, ``calloc``, ``realloc`` etc… is forbidden
* You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)
* You don’t have to push ``_putchar.c``, we will use our file. If you do it won’t be taken into account
* In the following examples, the ``main.c`` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function ``_putchar`` should be included in your header file called ``main.h``
* Don’t forget to push your header file
* All your header files should be include guarded
## Tasks completed
- [x] [0-binary_to_uint.c](./0-binary_to_uint.c)
	- Write a function that converts a binary number to an unsigned int.
		- Prototype: ``unsigned int binary_to_uint(const char *b)``;
		- where ``b`` is pointing to a string of 0 and 1 chars
		- Return: the converted number, or ``0`` if
			- there is one or more chars in the string ``b`` that is not ``0`` or ``1``
			- ``b`` is ``NULL``
```
julien@ubuntu:~/Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/Binary$ 
```
- [x] [1-print_binary.c](./1-print_binary.c)
	- Write a function that prints the binary representation of a number.
		- Prototype: ``void print_binary(unsigned long int n)``;
		- Format: see example
		- You are not allowed to use arrays
		- You are not allowed to use malloc
		- You are not allowed to use the ``%`` or ``/`` operators
```
julien@ubuntu:~/Binary$ cat 1-main.c 
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/Binary$ 
```
- [x] [2-get_bit.c](./2-get_bit.c)
	- Write a function that returns the value of a bit at a given index.
		- Prototype: ``int get_bit(unsigned long int n, unsigned int index)``;
		- where index is the ``index``, starting from ``0`` of the bit you want to get
		- Returns: the value of the bit at ``index`` or ``-1`` if an error occured
```
julien@ubuntu:~/Binary$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c    
julien@ubuntu:~/Binary$ ./c
1
1
0
julien@ubuntu:~/Binary$ 
```
- [x] [3-set_bit.c](./3-set_bit.c)
	- Write a function that sets the value of a bit to ``1`` at a given index.
		- Prototype: ``int set_bit(unsigned long int *n, unsigned int index)``;
		- where ``index`` is the index, starting from ``0`` of the bit you want to set
		- Returns: ``1`` if it worked, or ``-1`` if an error occurred
```
julien@ubuntu:~/Binary$ cat 3-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/Binary$ ./d
1056
1024
99
julien@ubuntu:~/Binary$ 
```
- [x] [4-clear_bit.c](./4-clear_bit.c)
	- Write a function that sets the value of a bit to ``0`` at a given index.
		- Prototype: ``int clear_bit(unsigned long int *n, unsigned int index)``;
		- where ``index`` is the index, starting from ``0`` of the bit you want to set
		- Returns: ``1`` if it worked, or ``-1`` if an error occurred
```
julien@ubuntu:~/Doubly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Doubly linked lists$ 
```
- [x] [5-flip_bits.c](./5-flip_bits.c)
	- Write a function that returns the number of bits you would need to flip to get from one number to another.
		- Prototype: ``unsigned int flip_bits(unsigned long int n, unsigned long int m)``;
		- You are not allowed to use the ``%`` or ``/`` operators
```
julien@ubuntu:~/Binary$ cat 5-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/Binary$ ./f
2
5
3
1
julien@ubuntu:~/Binary$ 
```
