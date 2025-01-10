# Integer Overflow in C

This repository demonstrates a simple C program that exhibits integer overflow. Integer overflow occurs when an arithmetic operation attempts to create a numeric value that is outside of the range that can be represented with a given number of bits. This can lead to unexpected program behavior and security vulnerabilities.

The `bug.c` file contains the erroneous code. The `bugSolution.c` file provides a solution using appropriate data types and input validation.

## How to Reproduce

1. Clone this repository.
2. Compile `bug.c` using a C compiler (e.g., GCC): `gcc bug.c -o bug`
3. Run the executable: `./bug`

The output will demonstrate the unexpected result of integer overflow.

## Solution

The `bugSolution.c` file shows how to mitigate the integer overflow by using `long long int` for larger numbers and adding input validation to prevent unexpected values.