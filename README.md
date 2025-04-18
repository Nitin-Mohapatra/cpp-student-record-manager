# Student Record Management System

This is a simple **C++ console application** that allows users to store student records and search for them by roll number.

## Features

- Add multiple student records.
- Prevent duplicate roll numbers.
- Store each student’s:
  - Roll Number
  - Name
  - Percentage
- Search a student by roll number and display their details if found.

## Program Flow

1. User is prompted to enter the total number of student records.
2. For each student:
   - Roll number is entered (duplicates are not allowed).
   - Name is entered.
   - Percentage is entered.
3. After all entries:
   - User is prompted to enter a roll number to search.
   - The program checks for the roll number and displays the corresponding student info if found.
   - If not found, an appropriate message is shown.

