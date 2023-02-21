# C - Projects (basics)
> Repository created to work in C related projects <br>
Holberton Dev Bootcamp - Montevideo 2023
## Projects completed
### Learned Topics
 * Why C programming is awesome
 * Who invented C
 * Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
 * What happens when you type ``gcc main.c``
 * What is an entry point
 * What is ``main``
 * How to print text using ``printf``, ``puts`` and ``putchar``
 * How to get the size of a specific type using the unary operator ``sizeof``
 * How to compile using ``gcc``
 * What is the default program name when compiling with ``gcc``
 * What is the official C coding style and how to check your code with ``betty-style``
 * How to find the right header to include in your source code when using a standard library function
 * How does the ``main`` function influence the return value of the program 
## Tasks completed
- [x] [0-preprocessor](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/0-preprocessor)
	- Script that runs a C file through the preprocessor and save the result into another file.
		- The C file name will be saved in the variable ``$CFILE``
		- The output should be saved in the file ``c``
- [x] [1-compiler](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/1-compiler)
	- Script that compiles a C file but does not link.
		- The C file name will be saved in the variable ``$CFILE``
		- The output file should be named the same as the C file, but with the extension ``.o`` instead of ``.c``
- [x] [2-assembler](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/2-assembler)
	- Script that generates the assembly code of a C code and save it in an output file.
		- The C file name will be saved in the variable ``$CFILE``
		- The output file should be named the same as the C file, but with the extension ``.s`` instead of ``.c``
- [x] [3-name](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/3-name)
	- Script that compiles a C file and creates an executable named ``cisfun``.
		- The C file name will be saved in the variable ``$CFILE``
- [x] [4-puts.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/4-puts.c)
	- C program that prints exactly ``"Programming is like building a multilingual puzzle,`` followed by a new line.
		- Use the function ``puts``
		- Not allowed to use ``printf``
		- The program should end with the value ``0``
 - [x] [5-printf.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/5-printf.c)
	- C program that prints exactly ``with proper grammar, but the outcome is a piece of art,``, followed by a new line.
		- Use the function ``printf``
		- Not allowed to use the function ``puts``
		- The program should compile without warning when using the ``-Wall gcc`` option
- [x] [6-size.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/6-size.c)
	- C program that prints the size of various types on the computer it is compiled and run on.
		- You should produce the exact same output as in the example
		- Warnings are allowed
		- Your program should return ``0``
		- You might have to install the package ``libc6-dev-i386`` on your Linux (Vagrant) to test the ``-m32 gcc`` option
``
julien@ubuntu:~/c/$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/$ echo $?
0
``
- [x] [100-intel](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/100-intel)
	- Script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
		- The C file name will be saved in the variable ``$CFILE``.
		- The output file should be named the same as the C file, but with the extension ``.s`` instead of ``.c``
``
julien@ubuntu:~/c/$ export CFILE=main.c
julien@ubuntu:~/c/$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/$ ./100-intel 
julien@ubuntu:~/c/$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
``
- [x] [101-quote.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/hello_world/101-quote.c)
		- C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
		- Not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
		- The program should return 1
		- The program should compile without any warnings when using the -Wall gcc option
``
julien@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/$ echo $?
1
julien@ubuntu:~/c/$ ./quote 2> q
julien@ubuntu:~/c/$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/$ grep printf < 101-quote.c
julien@ubuntu:~/c/$ grep put < 101-quote.c
``
