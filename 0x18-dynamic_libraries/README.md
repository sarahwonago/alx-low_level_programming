# Static Libraries in C

This repository contains C programs that demonstrate the creation and usage of static libraries. The tasks involve creating a static library and using it in a program. Here are the details of the tasks:

## Task 0: A library is not a luxury but one of the necessities of life

### Files:

- **libmy.a**: This is the static library created, containing various functions.

- **main.h**: A header file that includes prototypes for all the functions in the library.

- **0-isupper.c**: Contains the `_isupper` function, which checks if a character is uppercase.

- **0-memset.c**: Contains the `_memset` function to fill memory with a constant byte.

- **0-strcat.c**: Contains the `_strcat` function to concatenate two strings.

- **1-isdigit.c**: Contains the `_isdigit` function to check if a character is a digit.

- **1-memcpy.c**: Contains the `_memcpy` function to copy memory area.

- **1-strncat.c**: Contains the `_strncat` function to concatenate two strings but with a length limitation.

- **100-atoi.c**: Contains the `_atoi` function to convert a string to an integer.

- **2-strchr.c**: Contains the `_strchr` function to locate a character in a string.

- **2-strlen.c**: Contains the `_strlen` function to calculate the length of a string.

- **2-strncpy.c**: Contains the `_strncpy` function to copy a string.

- **3-islower.c**: Contains the `_islower` function to check if a character is lowercase.

- **3-puts.c**: Contains the `_puts` function to print a string.

- **3-strcmp.c**: Contains the `_strcmp` function to compare two strings.

- **3-strspn.c**: Contains the `_strspn` function to get the length of a prefix substring.

- **4-isalpha.c**: Contains the `_isalpha` function to check if a character is alphabetic.

- **4-strpbrk.c**: Contains the `_strpbrk` function to locate the first occurrence of characters in a string.

- **5-strstr.c**: Contains the `_strstr` function to locate a substring within a string.

- **6-abs.c**: Contains the `_abs` function to calculate the absolute value of an integer.

- **9-strcpy.c**: Contains the `_strcpy` function to copy a string.

- **_putchar.c**: Contains the `_putchar` function used for character output.

- **main.c**: A sample program that demonstrates the usage of functions from the `libmy.a` library.

## Task 1: Without libraries what have we? We have no past and no future

### Files:

- **create_static_lib.sh**: A shell script that creates a static library called `liball.a` from all the `.c` files in the current directory.

- **liball.a**: The resulting static library, containing all the functions from the previous task.



