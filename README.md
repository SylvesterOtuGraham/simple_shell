---

# Simple Shell Project

## Description:

This project is a simple implementation of a Unix shell in C. The shell supports basic command execution, path handling, and error management.

## Table of Contents:

- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [File Structure](#file-structure)
## Installation:

To run this shell on your local machine, follow these steps:

```bash
git clone https://github.com/your-username/simple-shell.git
cd simple-shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Usage:

Execute the shell with the following command:

```bash
./hsh
```

Once in the shell, you can enter commands as you would in a regular shell.

## Features:

- **Command Execution:** Run basic commands entered by the user.
- **Path Handling:** Support for handling absolute and relative paths.
- **Error Management:** Graceful handling of errors, including command not found.

## File Structure:

- `shell.h`: Header file containing function prototypes and necessary includes.

  Functions:
  - `_prompter`: Main shell functionality.
  - `_stringcmp`: String comparison function.
  - `_strconcat`: String concatenation function.
  - `path_handler`: Path handling function.
  - `stringcpy`: String copy function.
  - `stringlen`: String length function.
  - `exit_handler`: Function to handle the "exit" command.
  - `runcommand`: Function to execute commands.
  - `spacetrim`: Function to remove leading spaces.
  - `_strncpy`: String copy with a limit function.
  - `get_path`: Function to get the full path of a command.
  - `_getenv`: Function to get the value of an environment variable.
  - `tokenize_env`: Function to tokenize the PATH environment variable.
  - `_strncmp`: String comparison up to a specified number of characters.
  - `error_handler`: Function to handle errors.

- `md.c`: Main file with the implementation of the shell functionality.

- `error.c`: File containing error handling functions.

- `stringcopy.c`: File with string manipulation functions.

- `trim.c`: File with space trimming function.

- `...` (other files): Additional files with various functions for the shell.

---


