# C Hello World Projects

This repository contains a series of simple C programming tasks that demonstrate basic operations, compiling, and assembly generation. Each task is organized into its respective directory and includes a script or C file for each task.

## Task 0: Preprocessor

### Script: `0-preprocessor`

This script takes a C file defined in the `CFILE` environment variable, runs it through the preprocessor, and saves the result into a file named `c`.

## Task 1: Compiler

### Script: `1-compiler`

This script compiles a C file, but does not link it. It takes the C file name from the `CFILE` environment variable and produces an output file with the same name, but with a `.o` extension.

## Task 2: Assembler

### Script: `2-assembler`

This script generates the assembly code of a C file defined in the `CFILE` environment variable and saves it in an output file with a `.s` extension.

## Task 3: Name

### Script: `3-name`

This script compiles a C file and creates an executable named `cisfun`. It takes the C file name from the `CFILE` environment variable.

## Task 4: Hello, puts

### Source: `4-puts.c`

This C program prints the message "Programming is like building a multilingual puzzle" using the `puts` function and returns 0.

## Task 5: Hello, printf

### Source: `5-printf.c`

This C program prints the message "with proper grammar, but the outcome is a piece of art," using the `printf` function and returns 0.

## Task 6: Size is not grandeur

### Source: `6-size.c`

This C program prints the sizes of various data types on the computer it is compiled and run on. It is available in both 32-bit and 64-bit versions.

## Task 7: Intel (Advanced)

### Script: `100-intel`

This script generates the assembly code (Intel syntax) of a C file defined in the `CFILE` environment variable and saves it in an output file with a `.s` extension.

## Task 8: UNIX is basically a simple operating system (Advanced)

### Source: `101-quote.c`

This C program prints the message "and that piece of art is useful" to the standard error without using `printf` or `puts`. It returns 1 and is designed to compile without warnings when using the `-Wall` option.

Each task is contained within its respective file in this directory. 

