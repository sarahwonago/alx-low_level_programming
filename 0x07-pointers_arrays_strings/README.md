# C Functions for Manipulating Strings and Matrices

This repository contains a set of C functions for performing various string and matrix operations. Each function is designed to solve a specific task, such as string manipulation, memory operations, and matrix calculations.

## Function Descriptions

### 1. `_memset`

Prototype: `char *_memset(char *s, char b, unsigned int n);`

The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`. It returns a pointer to the memory area `s`. This function is similar to the standard library `memset` function.

### 2. `_memcpy`

Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`

The `_memcpy()` function copies `n` bytes from the memory area `src` to the memory area `dest`. It returns a pointer to `dest`. This function is similar to the standard library `memcpy` function.

### 3. `_strchr`

Prototype: `char *_strchr(char *s, char c);`

The `_strchr()` function locates the first occurrence of the character `c` in the string `s` and returns a pointer to it. If the character is not found, it returns `NULL`. This function is similar to the standard library `strchr` function.

### 4. `_strspn`

Prototype: `unsigned int _strspn(char *s, char *accept);`

The `_strspn()` function calculates the number of bytes in the initial segment of the string `s` that consist only of bytes from the `accept` string. It returns the length of the prefix substring. This function is similar to the standard library `strspn` function.

### 5. `_strpbrk`

Prototype: `char *_strpbrk(char *s, char *accept);`

The `_strpbrk()` function searches the string `s` for any of the bytes in the `accept` string and returns a pointer to the first matching byte. If no matching byte is found, it returns `NULL`. This function is similar to the standard library `strpbrk` function.

### 6. `_strstr`

Prototype: `char *_strstr(char *haystack, char *needle);`

The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack` and returns a pointer to the beginning of the located substring. If the substring is not found, it returns `NULL`. This function is similar to the standard library `strstr` function.

### 7. `print_chessboard`

Prototype: `void print_chessboard(char (*a)[8]);`

The `print_chessboard()` function prints a chessboard represented by a 2D array of characters. It takes an 8x8 array as input and displays the chessboard on the console.

### 8. `print_diagsums`

Prototype: `void print_diagsums(int *a, int size);`

The `print_diagsums()` function calculates the sum of the two diagonals of a square matrix of integers and prints the results. It takes a pointer to the matrix and its size as input.

## Example Usage

Each function includes a sample program that demonstrates its usage. You can compile and run these programs to see the functions in action.

## How to Compile and Run

To compile the sample programs, you can use a C compiler like GCC. Here's an example of how to compile one of the programs:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
./0-memset

