# libft

This project involves creating a library of basic C functions that will be used in future 42 school projects. The library implements various standard libc functions as well as additional utility functions for string manipulation, memory management, and more.

## 🚀 About The Project

Libft is the first project in the 42 school core curriculum. It challenges students to rewrite various standard C library functions, helping them understand the fundamentals of C programming and memory management.

### 🛠️ Built With

* C programming language
* Makefile for compilation
* Following strict 42 school coding standards (Norminette)

## 📋 Project Requirements

The project is divided into three parts:

1. **Libc Functions**: Reimplementation of basic libc functions
2. **Additional Functions**: Implementation of useful functions for string manipulation

### Libc Functions Include:
* Memory: memset, bzero, memcpy, memccpy, memmove, memchr, memcmp
* String: strlen, strlcpy, strlcat, strchr, strrchr, strncmp, strnstr
* Type: isalpha, isdigit, isalnum, isascii, isprint, toupper, tolower
* Standard: calloc, strdup

### Additional Functions Include:
* ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa
* ft_strmapi, ft_striteri
* ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

## 🔍 Code Standards

This project follows the strict coding standards of 42 school (known as "The Norm"), which includes:

* Functions must not exceed 25 lines
* No more than 5 functions per file
* Variables must be declared and initialized separately
* Only the following libc functions are allowed: malloc, free, write
* Loop must be done only with `while`
* No more than 5 variables per function

These standards might seem restrictive (especially compared to modern IDE suggestions), but they help in writing clean, maintainable code and understanding programming fundamentals.

## 🎯 Learning Objectives

Through this project, students learn:
* Deep understanding of basic algorithms and data structures
* Memory manipulation and allocation
* String manipulation
* Function pointers
* Makefile creation and usage
* Static library creation
* Code organization and modularity

## 🚦 Getting Started

### Prerequisites

* GCC compiler
* Make

### Installation

1. Clone the repository

2. Compile the library
```bash
make
```

This will create `libft.a` static library.

### Usage

To use the library in your project:

1. Include the header in your source files:
```c
#include "libft.h"
```

2. Compile with the library:
```bash
gcc your_file.c -L. -lft
```

## Acknowledgments

* 42 School for providing the project structure and requirements
* Fellow 42 students for peer support and evaluations

