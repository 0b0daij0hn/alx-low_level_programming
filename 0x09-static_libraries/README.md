# Project Title

This project contains a static library (libmy.a) with various C functions.

## Files

- `libmy.a`: Static library containing functions.
- `main.h`: Header file with function prototypes.

## Usage

Include the header file `main.h` in your C programs and link with `libmy.a` to use the functions in your project.

Example:

```c
#include "main.h"

int main(void) {
    _puts("Hello, world!");
    return 0;
}

