# C - Recursion
> Repository created to work in C related projects <br>
Holberton Dev Bootcamp - Montevideo 2023
## Resources
* [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
* [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
* [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
* [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)
## Learned Topics
### General
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables
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
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)
* You don’t have to push ``_putchar.c``, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called ``main.h``
* Don’t forget to push your header file
* You are not allowed to use static variables
## Tasks completed
- [x] [0-reset_to_98.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/0-reset_to_98.c)
	- Write a function that takes a pointer to an ``int`` as parameter and updates the value it points to to ``98``.
		- Prototype: ``void reset_to_98(int *n)``;
```
julien@ubuntu:~/$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/$ ./0-98 
n=402
n=98
julien@ubuntu:~/$ 
```
- [x] [1-print_rev_recursion.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/recursion/1-print_rev_recursion.c)
	- Write a function that prints a string in reverse.
		- Prototype: ``void _print_rev_recursion(char *s)``;
```
julien@ubuntu:~/Recursion$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/Recursion$ 
```
- [x] [2-strlen_recursion.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/recursion/2-strlen_recursion.c)
	- Write a function that returns the length of a string.
		- Prototype: ``int _strlen_recursion(char *s)``;
		- FYI: The standard library provides a similar function: ``strlen``. Run ``man strlen`` to learn more.
```
julien@ubuntu:~/Recursion$ cat 2-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/Recursion$ 
```
- [x] [3-factorial.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/recursion/3-factorial.c)
	- Write a function that returns the factorial of a given number.
		- Prototype: ``int factorial(int n)``;
		- If n is lower than ``0``, the function should return ``-1`` to indicate an error
		- Factorial of ``0`` is ``1``
```
julien@ubuntu:~/Recursion$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/Recursion$
```
- [x] [4-pow_recursion.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/recursion/4-pow_recursion.c)
	- Write a function that returns the value of ``x`` raised to the power of ``y``.
		- Prototype: int ``_pow_recursion(int x, int y)``;
		- If ``y`` is lower than ``0``, the function should return ``-1``
		- FYI: The standard library provides a different function: ``pow``. Run ``man pow`` to learn more.
```
julien@ubuntu:~/Recursion$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/Recursion$ 
```
- [x] [5-sqrt_recursion.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/recursion/5-sqrt_recursion.c)
	- Write a function that returns the natural square root of a number.
		- Prototype: ``int _sqrt_recursion(int n)``;
		- If ``n`` does not have a natural square root, the function should return ``-1``
		- FYI: The standard library provides a different function: ``sqrt``. Run ``man sqrt`` to learn more.
```
julien@ubuntu:~/Recursion$ cat 5-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/Recursion$ 
```
- [x] [6-is_prime_number.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/recursion/6-is_prime_number.c)
	- Write a function that returns ``1`` if the input integer is a ``prime number``, otherwise return ``0``.
		- Prototype: ``int is_prime_number(int n)``;
```
julien@ubuntu:~/Recursion$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/Recursion$ 
```
- [x] [100-is_palindrome.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/recursion/100-is_palindrome.c)
	- Write a function that returns ``1`` if a string is a palindrome and ``0`` if not.
		- Prototype: ``int is_palindrome(char *s)``;
		- An empty string is a palindrome
```
julien@ubuntu:~/Recursion$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
julien@ubuntu:~/Recursion$ ./100-palindrome 
1
1
0
1
julien@ubuntu:~/Recursion$
```
- [x] [101-wildcmp.c](https://github.com/cristian-encalada/holbertonschool-low_level_programming/blob/master/recursion/101-wildcmp.c)
	- Write a function that compares two strings and returns ``1`` if the strings can be considered identical, otherwise return ``0``.
		- Prototype: ``int wildcmp(char *s1, char *s2)``;
		- ``s2`` can contain the special character *.
		- The special char ``*`` can replace any string (including an empty string)
```
julien@ubuntu:~/Recursion$ cat 101-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
julien@ubuntu:~/Recursion$ ./101-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
julien@ubuntu:~/Recursion$ 
```
