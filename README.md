# Our own _printf Program
## C Programming Language



## Table of Contents
1. [General Info](#general-info)
2. [Flowchart](#Flowchart)
3. [Files](#files)
5. [Usage](#Usage)
4. [Authors](#Authors)

### General Info
***
This is a project with a function (_printf) that mimics the behavior and functionality of the "printf" function from the standard C programming language library in such a way that it emulates its operation and logic. Using the _write to print characters and integers as needed.

What you should learn from this project:

- How to use git in a team setting.
- Applying variadic functions to a big project.
- The complexities of printf.
- Managing a lot of files and finding a good workflow.
- reinforce teamwork skills.

## Flowchart
***
![Image text](https://media-exp1.licdn.com/dms/image/C4E22AQFr6Rvm_INn0g/feedshare-shrink_2048_1536/0/1616009320942?e=1619049600&v=beta&t=QOVcCcEbSqHFhTi_24Oz3D474vyjQHjQM-zxO-RO0BQ)
## Files
***
| File | Description |
| ------------- | ------------- |
|      holberton.h       | header file that contains the structure and prototypes of the project|
|       _printf.c        | printf whit _write works like a putchar, but writing to stdout.  |
|      _print_f_d.c      | Prints a decimal (base 10) number  |
|       functions.c      | Contains the functions that print the given format  |
|     get_operator.c     | Determines the function to print some data. |
## Usage
```
#include ''holberton.h'' "
int main(void)"

{

int len;

int len2;

unsigned int ui;

void *addr;

len = _printf("Let's try to printf a simple sentence.\n");

_printf("Length:[%d, %i]\n", len, len);

_printf("Negative:[%d]\n", -762534);

_printf("Unsigned:[%u]\n", ui);

_printf("Unsigned octal:[%o]\n", ui);

_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

_printf("Length:[%d, %i]\n", len, len);

_printf("Character:[%c]\n", 'H');

_printf("String:[%s]\n", "I am a string !");

_printf("Address:[%p]\n", addr);

len = _printf("Percent:[%%]\n");

_printf("Unknown:[%r]\n");

}
```
This example prints a integer("%d"), a string("%s") and character("%c")

## Authors
***

> Yael Uribe
>
> Hugo Cortés
>