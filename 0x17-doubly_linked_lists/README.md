# 0x17. C - Doubly Linked Lists

## Table of Contents

- [Description](#description)
- [Project Requirements](#project-requirements)
- [Tasks](#tasks)
- [How to Use](#how-to-use)
- [Author](#author)

## Description

This project is part of the curriculum at ALX - Holberton School and focuses on implementing a set of C functions to manipulate doubly linked lists.

## Project Requirements

- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using Python3 (version 3.8.5)
- All your files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, `printf`, and `exit`
- The prototypes of all your functions should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include-guarded

## Tasks

### 0. Print list

Write a function that prints all the elements of a `dlistint_t` list.

- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes
- Format: see example

Example:
```c
julien@ubuntu:~/0x17. Doubly linked lists$ ./a
9
8
-> 2 elements

