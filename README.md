# C CLI Password Manager (v1.0)

A simple, lightweight command-line password manager written in C. Perfect for learning file I/O, structs, pointers, and control flow in C.

## Features
- **Add Accounts:** Securely store your username, service name, and password in a CSV-formatted local file.
- **View Accounts:** Read and display all stored credentials directly in the terminal.
- **Interactive Menu:** Powered by a `do-while` and `switch-case` loop for continuous operation.
- **Input Sanitization:** Uses `fgets` and `strcspn` to prevent buffer overflows and cleanly handle newlines.

## Getting Started

### Prerequisites
You need a C compiler installed (like `gcc`).

### Compilation & Running
Clone the repository and compile the source file:

```bash
gcc main.c -o password_manager
./password_manager
