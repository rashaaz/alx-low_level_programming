# 0x1C. C - Makefiles

## Project Overview

- **By:** Julien Barbier
- **Weight:** 1
- **Project Duration:** Jan 24, 2024, 6:00 AM - Jan 25, 2024, 6:00 AM
- **Checker Release:** Jan 24, 2024, 12:00 PM
- **Auto Review:** An auto review will be launched at the deadline

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are make and Makefiles
- When, why, and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

## Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks to meet the learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

**General:**
- Allowed editors: vi, vim, emacs
- OS: Ubuntu 20.04 LTS
- Version of gcc: 9.3.0
- Version of make: GNU Make 4.2.1
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory

### More Info

**Files:**
In the following tasks, we are going to use these files. We want to compile these only.

## Tasks

### 0. make -f 0-Makefile

**Mandatory**

Create your first Makefile.

**Requirements:**
- Name of the executable: school
- Rules: all
- The all rule builds your executable
- Variables: none

```bash
julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school
j#0000000000000000000000000000000000000
...
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
julien@ubuntu:~/0x1C. Makefiles$
 and 6 more taskess
