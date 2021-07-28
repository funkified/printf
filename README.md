# _printf

## Project Description

Print ARGUMENT(s) according to FORMAT, or execute according to OPTION.

## Return

If successful the function will print the characters before the Null byte.
If not successful it will return a negative value.

## Options

**%c**
 print a single character

**%d**
 print a decimal (base 10) number

**%e**
 print an exponential floating-point number

**%f**
 print a floating-point number

**%g**
 print a general-format floating-point number

**%i**
 print an integer in base 10

**%o**
 print a number in octal (base 8)

**%s**
 print a string of characters

**%u**
 print an unsigned decimal (base 10) number

**%x**
 print a number in hexidecimal (base 16)

**%%**
 print a percent sign (\% also works)

## Compilation

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

You might want to look  at the gcc flag -Wnoformat when testing

## Team members
Sergio Vera
Gabriela Martinez

### Reference
*man of help*
printf (3)

