# Random Password Generator 

## Overview

The Random Password Generator is a simple command-line program written in C that generates secure random passwords based on user preferences. The user can choose the password length and select which types of characters to include, such as numbers, uppercase letters, lowercase letters, and special characters.

This project demonstrates the use of arrays, strings, random number generation, functions, and user input handling in C.

---

## Features

* Generate passwords of any desired length.
* Option to include:
  * Numbers (0–9)
  * Uppercase letters (A–Z)
  * Lowercase letters (a–z)
  * Special characters (e.g., !@#$%^&*)
* Randomized password generation using rand() and time() for seeding.
* Simple and interactive command-line interface.

---

## Requirements

* A C compiler such as
  * GCC
    OR
  * MinGW (Windows)
---

## Compilation

Use the following command to compile the program:

gcc password_gen.c 

---

## Running the Program

After compilation, run the executable:

./a

OR

./a.out

OR

a.exe
---

## Example Usage

```
Enter length of password : 12
Do you want to include numbers : (Y/N) Y
Do you want to include upper case alphabets : (Y/N) Y
Do you want to include lower case alphabets : (Y/N) Y
Do you want to include special characters : (Y/N) Y

Generated Password:
A8@kP2!xQ1z$
```

---

## How It Works

1. The program asks the user for the desired password length.
2. The user selects which character types to include.
3. Based on the selected options, a character set is created.
4. The program randomly selects characters from the character set using rand().
5. The generated characters are stored in an array and printed as the password.
---

## File Structure

```
password_gen.c   # Main source code
README.md              # Project documentation
```

---

## Limitations

* Uses the rand() function, which is not cryptographically secure.
* Input validation is basic.
* Designed primarily as a learning project for C programming.

---

## Possible Improvements

* Use of a cryptographically secure random generator.
* Allow generating multiple passwords at once.
* Improve input validation.
* Add command-line arguments instead of interactive input.

---

## Learning Concepts Demonstrated

* Functions
* Strings and arrays
* Random number generation
* Conditional logic
* User input handling

---
