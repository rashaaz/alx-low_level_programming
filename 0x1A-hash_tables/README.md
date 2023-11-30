# 0x1A. C - Hash tables

## Overview
This project focuses on the implementation of hash tables in the C programming language. Hash tables are crucial data structures that provide efficient key-value storage and retrieval. Throughout this project, you will gain insights into hash functions, collision handling, and the advantages and drawbacks of using hash tables.

## Learning Objectives
Upon completing this project, you should be able to:

### General
- **Understand the concept of hash functions and what makes a hash function effective.**
- **Grasp the working principles of hash tables and their practical usage.**
- **Identify and handle collisions, exploring the main approaches within the context of a hash table.**
- **Evaluate the advantages and disadvantages associated with the use of hash tables.**
- **Recognize common use cases for hash tables.**

## Resources
Explore the following resources to enhance your understanding:

- [What is a HashTable Data Structure - Introduction to Hash Tables, Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://www.interviewcake.com/concept/java/hash-map)
- [Why hash tables and not arrays](https://stackoverflow.com/questions/730620/how-does-a-hash-table-work)
- [Python dictionaries](https://dbader.org/blog/python-dictionaries-matrix)
- [How dictionaries are implemented in Python 2.7](https://www.laurentluce.com/posts/python-dictionary-implementation/)
- [Difference between a dictionary and a hash table](https://stackoverflow.com/questions/609168/difference-between-dictionary-and-hashtable)

## Requirements
### General
- **Allowed editors:** `vi`, `vim`, `emacs`
- **Compile on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`**
- **Files must end with a new line**
- **Include a mandatory `README.md` file at the root of the project folder**
- **Code should adhere to the Betty style, checked using `betty-style.pl` and `betty-doc.pl`**
- **Prohibit the use of global variables**
- **No more than 5 functions per file**
- **Permit the use of the C standard library**
- **Include function prototypes in the header file named `hash_tables.h`**
- **Do not forget to push your header file**
- **All header files must be include guarded**

## Data Structures
Utilize the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list
 * because we want our HashTable to use Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

## tasks

- 5 mandatory tasks
- 1 advanced
