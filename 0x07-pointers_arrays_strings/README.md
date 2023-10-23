# C Functions

This repository contains a collection of C functions that perform various string and array manipulation operations. Each function is implemented according to specific requirements and prototypes.

## Table of Contents

1. [0-memset.c](#0-memsetc)
2. [1-memcpy.c](#1-memcpyc)
3. [2-strchr.c](#2-strchrc)
4. [3-strspn.c](#3-strspnc)
5. [4-strpbrk.c](#4-strpbrkc)
6. [5-strstr.c](#5-strstrc)
7. [7-print_chessboard.c](#7-print_chessboardc)
8. [8-print_diagsums.c](#8-print_diagsumsc)

## 0-memset.c

The `0-memset.c` file contains the implementation of the `memset` function. This function fills a memory area pointed to by `s` with a constant byte `b` for the first `n` bytes. It returns a pointer to the memory area `s`.

## 1-memcpy.c

The `1-memcpy.c` file contains the implementation of the `memcpy` function. This function copies `n` bytes from the source memory area `src` to the destination memory area `dest`. It returns a pointer to `dest`.

## 2-strchr.c

The `2-strchr.c` file contains the implementation of the `strchr` function. This function searches for the character `c` in the string `s` and returns a pointer to the first occurrence of `c` in `s`, or `NULL` if the character is not found.

## 3-strspn.c

The `3-strspn.c` file contains the implementation of the `strspn` function. This function calculates the length of a prefix substring in the string `s`, which consists only of bytes from the `accept` string.

## 4-strpbrk.c

The `4-strpbrk.c` file contains the implementation of the `strpbrk` function. This function searches the string `s` for the first occurrence of any character from the `accept` string. It returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found.

## 5-strstr.c

The `5-strstr.c` file contains the implementation of the `strstr` function. This function finds the first occurrence of the substring `needle` in the string `haystack`. It returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

## 7-print_chessboard.c

The `7-print_chessboard.c` file contains the implementation of the `print_chessboard` function. This function takes a 2D array representing a chessboard and prints it to the standard output in a visually appealing format.

## 8-print_diagsums.c

The `8-print_diagsums.c` file contains the implementation of the `print_diagsums` function. This function prints the sum of the two diagonals of a square matrix of integers. It takes an array and its size as arguments and displays the sums of both diagonals.



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

