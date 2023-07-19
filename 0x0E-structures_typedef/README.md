0x0E. C - Structures, typedef

Documentation: Data structures
Jump to bottom
Alexandre Gautier edited this page on Oct 12, 2016 · 1 revision
 Pages 18
Home
0. Betty cli
0.1 - Betty-style usage

0.2 - Betty-doc usage

0.3 - References

1. Coding style
1.1 - Indentation

1.2 - Breaking long lines and strings

1.3 - Placing Braces

1.4 - Placing Spaces

1.5 - Naming

1.6 - Functions

1.7 - Commenting

1.8 - Macros and Enums

1.9 - Header files

2. Documentation
2.1 - Functions

2.2 - Data structures

3. Tools
3.1 - Emacs

3.2 - Vim

3.3 - Atom

Clone this wiki locally
https://github.com/alx-tools/Betty.wiki.git
Besides functions you can also write documentation for structs, unions, enums and typedefs.
Instead of the function name you must write the name of the declaration;
the struct/union/enum/typedef must always precede the name. Nesting of declarations is not supported.
Use the argument mechanism to document members or constants.

Example:

/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	int c;
};
For really longs structs, you can also describe arguments inside the body of the struct.

Example:

/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	/**
	 * @c: This is longer description of C
	 *
	 * Description: You can use paragraphs to describe arguments
	 * using this method.
	 */
	int c;
};
This should be use only for struct/enum members.

Example for a typedef:

/**
 * u_int - Typedef for unsigned int
 */
typedef unsigned int u_int;
