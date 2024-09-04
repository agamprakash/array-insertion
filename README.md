# C Programming Assignment: Array Insertion

## Overview
In this assignment, you will be working with arrays in C. The goal is to write a program that can insert elements into an array at the end, the beginning, and at a specified index. This will help you understand basic array manipulations and enhance your problem-solving skills in C programming.

You will be provided with a partially completed code file. Your task is to complete the functions in the code that handle the insertion operations.

## Assignment Tasks

### 1. Insert at the End
- **Task:** Complete the `insertAtEnd` function.
- **Details:** You need to insert a user-specified element at the end of the pre-populated array.

### 2. Insert at the Beginning
- **Task:** Complete the `insertAtBeginning` function.
- **Details:** You need to insert a user-specified element at the beginning of the pre-populated array, shifting all existing elements to the right.

### 3. Insert at a Given Index
- **Task:** Complete the `insertAtIndex` function.
- **Details:** You need to insert a user-specified element at a given index in the array, shifting the elements from that index onward to the right.

## How to Complete the Assignment

1. **Open the provided `.c` file:**
   - This file contains the main program structure and partially completed functions. Your task is to fill in the missing code within the `insertAtEnd`, `insertAtBeginning`, and `insertAtIndex` functions.

2. **Read the comments:**
   - Each function contains comments that guide you on what needs to be done. Follow the instructions carefully to complete the functions.

3. **Test your code:**
   - The code file includes test functions that will be executed to check if your implementation is correct. Run the program and verify that the output matches the expected results.

4. **Run the tests:**
   - To verify the correctness of your implementation, you can run the provided `test.sh` script. This script will compile your code and run test cases to ensure your functions work as expected.

## Running the Tests

1. **Compile your program:**
   - Run the following command in your terminal to compile the program:
     ```bash
     gcc -o array_insert_solution_modular array_insert_solution_modular.c
     ```

2. **Run the test script:**
   - Execute the test script to check your code:
     ```bash
     bash test.sh
     ```
   - The script will report whether each of your functions passed the test cases.

3. **Review the results:**
   - If any tests fail, review your code and make the necessary corrections. Once all tests pass, your assignment is complete.

## Submission
Once you’ve completed and tested your program, commit your changes and push them to the repository. Ensure that your code is correctly formatted and includes any necessary comments explaining your logic.