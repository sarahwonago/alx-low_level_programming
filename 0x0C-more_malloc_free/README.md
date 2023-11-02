# C Programming Tasks: More on Dynamic Memory Allocation (Malloc and Free)

This repository contains a series of C programming tasks focused on dynamic memory allocation using `malloc` and memory management with `free`. Each task is organized into its respective directory and includes a C file for implementation.

## Task 0: Malloc Checked

**File**: `0-malloc_checked.c`

This task involves creating a function called `malloc_checked` that dynamically allocates memory using `malloc`. The function returns a pointer to the allocated memory and ensures that if `malloc` fails, it results in normal process termination with a status value of 98.

**Usage**:

```c
void *malloc_checked(unsigned int b);
