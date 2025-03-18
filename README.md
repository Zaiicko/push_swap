# Push_swap

[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))   

## Introduction

`Push_swap` is a project that involves creating a sorting program using two stacks and a series of operations. The goal is to sort a list of integers in ascending order with the smallest number of operations. This project is an excellent way to practice algorithmic thinking and understand sorting algorithms' complexity.

The program is implemented using a double linked list to manage the stacks. The sorting is performed using the Turk algorithm, developed by `A. Yigit Ogun`, which is designed to efficiently handle the sorting of the stack with minimal operations.

## Features

- **Stacks:**
  - Two stacks, `a` and `b`, are provided.
  - Stack `a` starts with a list of integers to be sorted.
  - Stack `b` starts empty and is used as an auxiliary stack during sorting.

- **Operations:**
  - `sa` (swap a): Swap the first two elements of stack `a`.
  - `sb` (swap b): Swap the first two elements of stack `b`.
  - `ss`: Perform `sa` and `sb` simultaneously.
  - `pa` (push a): Move the top element from stack `b` to stack `a`.
  - `pb` (push b): Move the top element from stack `a` to stack `b`.
  - `ra` (rotate a): Rotate stack `a` up by one position.
  - `rb` (rotate b): Rotate stack `b` up by one position.
  - `rr`: Perform `ra` and `rb` simultaneously.
  - `rra` (reverse rotate a): Rotate stack `a` down by one position.
  - `rrb` (reverse rotate b): Rotate stack `b` down by one position.
  - `rrr`: Perform `rra` and `rrb` simultaneously.

## Makefile Commands

- `make`: Compiles the project, creating the `push_swap` executable.
- `make clean`: Removes object files, keeping only the source code.
- `make fclean`: Cleans the project by removing the compiled executable and object files.
- `make re`: Performs a full recompilation by cleaning and then recompiling the project.

## Usage

To use the `push_swap` program:

1. **Compile the Project:**

    ```sh
    make
    ```

2. **Run the Program:**

    ```sh
    ./push_swap <list_of_integers>
    ```

    Replace `<list_of_integers>` with the integers you want to sort, e.g., `5 1 3 4 2`.

3. **Example:**

    ```sh
    ./push_swap 2 1 3 6 5 8
    ```

    This will output the sequence of operations needed to sort the stack `a`.

## Screenshot

<img width="218" alt="Capture d’écran 2024-08-02 à 02 34 22" src="https://github.com/user-attachments/assets/234f4b74-4dd4-450c-814f-51d8820389b0">
