# 0x18. C - Dynamic Libraries

## Description
This project focuses on dynamic libraries in the C programming language. It covers the creation, usage, and distinctions between static and shared libraries. Essential tools like `nm`, `ldd`, and `ldconfig` are introduced to aid in understanding.

## Learning Objectives
- Grasp the concept of dynamic libraries, their functionality, and the process of creating and utilizing them.
- Familiarization with the environment variable `$LD_LIBRARY_PATH` and its application.
- Differentiation between static and shared libraries.
- Basic utilization of tools such as `nm`, `ldd`, and `ldconfig`.

## Requirements
### C
- Editors allowed: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Files should conclude with a new line.
- A mandatory README.md file.
- Code should adhere to the Betty style.
- No global variables are allowed.
- No more than 5 functions per file.
- Standard library functions are forbidden; the use of functions like printf, puts, etc., is not allowed.
- Use of `_putchar` is permitted.
- Do not push `_putchar.c`; it will be provided.
- Prototypes of all functions and the `_putchar` function should be included in the header file `main.h`.
- Push the header file.

### Bash
- Editors allowed: vi, vim, emacs
- All scripts tested on Ubuntu 20.04 LTS.
- Files should end with a new line.
- The first line of all files should be exactly `#!/bin/bash`.
- A README.md file, at the root of the project folder, describing each script is mandatory.
- All files must be executable.

## Tasks

### 0. A library is not a luxury but one of the necessities of life
Create the dynamic library `libdynamic.so` containing various functions. Implement the functions if not already coded, and create the necessary header file `main.h`
and advanced taskes
