# C Calculator

A simple command-line calculator built with C. My first project while learning C programming, functions, and Git.

## Features

- Addition, subtraction, multiplication, and division
- User input through the terminal
- Separate functions for calculator operations
- Simple menu-based interface

## Project Structure

```text
Calculator/
├── main.c
├── functions.h
└── README.md
```

## Getting Started

### Requirements

- GCC compiler
- A terminal or code editor such as VS Code

### Compile

Open the project directory in your terminal and run:

```bash
gcc main.c -o calculator
```

### Run

**Windows PowerShell**

```powershell
.\calculator.exe
```

**Linux / macOS**

```bash
./calculator
```

> If your function definitions are in a separate `functions.c` file, compile both source files:
>
> ```bash
> gcc main.c functions.c -o calculator
> ```

## What I'm Learning

- C functions and header files
- Conditional statements and `switch` cases
- User input and output
- Compiling and debugging C programs
- Git and GitHub version control

## What's Next?

- [ ] Improve input validation
- [ ] Add more mathematical operations
- [ ] Improve the terminal interface
- [ ] Organize the project into separate source and header files
