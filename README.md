# TEAM  PROJECT:  printf

## Project  Description
_______________________

* This project creates a similar printf function in C
* The printf function sends formatted output to the standard output
* The custom \_print() function emulates basic functions of the already existing print function as seen in the project tasks section of this Readme

## Authors
__________

* Bradley Kibwana:  **https://github.com/Bradkibs**
* Angela Koki:      **https://github.com/AngieKoki**

## Resources
____________

* **Secrets of printf - Don Colton**
* Download the pdf here: https://www.cypress.com/file/54761/download


## Files  contained  in  this  directory
____________________________________

|Name                   |Information                                                          |
|-----------------------|---------------------------------------------------------------------|
|`README.md`            | Contains information about the project                              |
|` \_putchar.c`         | Contains custom putchar function for printing to the standard output|
|` main.h`              | Contains the standard libraries and custom prototypes               |
|` printfun.c`          | Calls the functions to print to the standard output                 |
|` vprintfun.c`         | Contains switch case functions                                      |

## Project  Tasks
________________________


#### Authorized functions and macros
___________________________________

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va\_start (man 3 va\_start)
* va\_end (man 3 va\_end)
* va\_copy (man 3 va\_copy)
* va\_arg (man 3 va\_arg)

#### Compilation

The code was compiled this way:

* `$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
-------------------------------------------------------------------------------

#### Write functions that produce output according to the following instructions

`Task 0:`
* Handle the following conversion specifiers
	- c
	- s
	- %

`Task 1:`
* Handle the following conversion specifiers
	- d
	- i

`Task 2:`
* Handle the following conversion specifiers
	- b: the unsigned int argument is converted to binary

`Task 3:`
* Handle the following conversion specifiers
	- u
	- o
	- x
	- X

`Task 4:`
* Use a local buffer of 1024 chars in order to call write as little as possible

`Task 5:`
* Handle the following custom conversion specifier
	- S

`Task 6:`
* Handle the following conversion specifier
	- p

`Task 7:`
* Handle the following flag characters for non custom conversion specifiers
	- space, - , and #

`Task 8:`
* Handle the following length modifiers for non custom conversion specifiers
	- l
	- h

`Task 9:`
* Handle the **field width** for non-custom conversion specifiers

`Task 10:`
* Handle the **precision** for non-custom conversion specifiers

`Task 11:`
* Handle the **0** flag character for non-custom conversion specifiers

`Task 12:`
* Handle the **-** flag character for non-custom conversion specifiers

`Task 13:`
* Handle the following custom conversion specifiers
	- r: prints the reversed string

`Task 14:`
* Handle the following custom conversion specifiers
	- R: prints the rot13'ed string

`Task 15:`
* All the above options work well together

## Known Bugs
_____________

* No known bugs

## Technologies Used
____________________

* SHELL
* C

## Contact information
______________________

* In case of any questions related to this project feel free to reach out to any of the team members
* Bradley Kibwana - bradleykibwana@gmail.com
* Angela Koki - angie.dar66@gmail.com
