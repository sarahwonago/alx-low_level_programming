# C Programming Tasks: Dynamic Memory Allocation (Malloc and Free)

Welcome to this repository, which contains a collection of C programs designed to demonstrate the use of dynamic memory allocation functions, `malloc` and `free`. Each task addresses specific memory management challenges. Below, you'll find detailed explanations of each task, along with the corresponding file names.

---

## Task 0: Float like a butterfly, sting like a bee

**File**: `0-create_array.c`

This task involves creating a function, `create_array`, which dynamically allocates an array of characters and initializes each element with a specific character. The size of the array and the character are passed as parameters. The function returns a pointer to the allocated array, or NULL if the size is 0.

**Usage**:

```c
char *create_array(unsigned int size, char c);
