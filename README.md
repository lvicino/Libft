# Libft
42 Libft

**Libft** is a custom C library created as a foundational project at 42. The goal of this project is to implement a collection of standard C library functions, as well as additional utility functions, to be used in future projects.

## Contents

The library contains custom implementations of standard libc functions, additional string manipulation tools, and linked list handling functions.

### Part 1: Libc Functions
Standard C library functions tailored to specific project requirements.

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isdigit` | Checks for a digit (0 through 9). |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isascii` | Checks whether c fits into the ASCII character set. |
| `ft_isprint` | Checks for any printable character. |
| `ft_strlen` | Calculates the length of a string. |
| `ft_memset` | Fills memory with a constant byte. |
| `ft_bzero` | Zeroes a byte string. |
| `ft_memcpy` | Copies memory area. |
| `ft_memmove` | Copies memory area (handling overlaps). |
| `ft_strlcpy` | Copies string to a specific size. |
| `ft_strlcat` | Concatenates string to a specific size. |
| `ft_toupper` | Converts char to uppercase. |
| `ft_tolower` | Converts char to lowercase. |
| `ft_strchr` | Locates character in string (first occurrence). |
| `ft_strrchr` | Locates character in string (last occurrence). |
| `ft_strncmp` | Compares two strings. |
| `ft_memchr` | Scans memory for a character. |
| `ft_memcmp` | Compares memory areas. |
| `ft_strnstr` | Locates a substring in a string. |
| `ft_atoi` | Converts a string to an integer. |
| `ft_calloc` | Allocates memory and sets its bytes' values to 0. |
| `ft_strdup` | Creates a duplicate for the string passed as parameter. |

### Part 2: Additional Functions
Utility functions for string manipulation, memory management, and output.

| Function | Description |
| :--- | :--- |
| `ft_substr` | Allocates and returns a substring from the string 's'. |
| `ft_strjoin` | Allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'. |
| `ft_strtrim` | Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the start and the end of the string. |
| `ft_split` | Allocates and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. |
| `ft_itoa` | Allocates and returns a string representing the integer received as an argument. |
| `ft_strmapi` | Applies the function 'f' to each character of the string 's' to create a new string. |
| `ft_striteri` | Applies the function 'f' on each character of the string passed as argument. |
| `ft_putchar_fd` | Outputs the character 'c' to the given file descriptor. |
| `ft_putstr_fd` | Outputs the string 's' to the given file descriptor. |
| `ft_putendl_fd` | Outputs the string 's' to the given file descriptor followed by a newline. |
| `ft_putnbr_fd` | Outputs the integer 'n' to the given file descriptor. |

### Bonus: Linked Lists
Functions to manipulate singly linked lists.

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Allocates and returns a new node. |
| `ft_lstadd_front` | Adds the node 'new' at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds the node 'new' at the end of the list. |
| `ft_lstdelone` | Takes as a parameter a node and frees the memory of the node’s content. |
| `ft_lstclear` | Deletes and frees the given node and every successor of that node. |
| `ft_lstiter` | Iterates the list 'lst' and applies the function 'f' on the content of each node. |
| `ft_lstmap` | Iterates the list 'lst' and applies the function 'f' on the content of each node to create a new list. |

## Usage

### Requirements
The library is written in C and requires a standard **GCC compiler**.
