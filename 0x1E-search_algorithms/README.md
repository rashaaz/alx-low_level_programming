# Search Algorithms

This project contains implementations of various search algorithms in C, along with their time and space complexities.

## Project Overview

The project consists of the following files:

- `0-linear.c`: Implementation of the linear search algorithm.
- `1-binary.c`: Implementation of the binary search algorithm.
- `2-O`: File containing the time complexity (worst case) of linear search.
- `3-O`: File containing the space complexity (worst case) of an iterative linear search.
- `4-O`: File containing the time complexity (worst case) of binary search.
- `5-O`: File containing the space complexity (worst case) of binary search.
- `6-O`: File containing the space complexity of the `allocate_map` function.

## Compilation

To compile the programs, use the following commands:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary

