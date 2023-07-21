# ft_printf

The goal of the ft_printf project is to recode the `printf()` function from the standard C library. This project introduces variadic arguments.

## Functionality

The ft_printf function Writes to the standard output according to the format string given as the first argument.  
The format string contains normal characters and conversions introduced by the % character. The conversions will take the next argument of the function and write it to the standard output according to the type of conversion.  
[Supported conversions](#conversions).  
The bonus part manages additional flags for certain conversions. [Supported flags](#flags).  

## Usage

Clone the project and run 'make' in the repository. For the additional functionality with flags run make bonus. This creates a library called 'libftprintf.a'.
To use the function compile the library with your program and include the header files in the repository.

### Conversions

- d : The argument is an int and printed as a signed decimal
- i : The argument is an int and printed as a signed decimal
- c : The argument is an int and printed as an unsigned char
- s : The argument is expected to be a pointer to a string. The string is then written up to the NUL character
- p : The argument is a pointer and is printed in hexadecimal
- u : The argument is an unsigned int and printed as an unsigned int
- x : The argument is an int and printed in hexadecimal
- X : The argument is an int and printed in hexadecimal with capital letters
- % : the % sign is printed

### Flags

- '+' : A sign will always be placed before a number, overrides space
- ' ' : A blank will be left before a positive number
- '0' : The converted value is padded on the left with zeros instead of blanks
- '-' : The converted value is padded on the right with blanks, instead of on the left with zero or blanks
- '#' : For x and X conversion the number will have the string "0x" or "0X" prepended to it
- precision : Gives the minimum number of digits for the number conversions or the maximum number of characters for the 's' conversion
- width : If the converted value has fewer characters than the width field, it will be padded with spaces on the left
