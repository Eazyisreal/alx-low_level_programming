
	0x10-variadic_functions

0-sum_them_all.c

	A function that returnss the sum of all its parameters.

	Prototype: int sum_them_all(const unsigned int n, ...);.
	If n == 0, the function returns 0.

1-print_numbers.c

	A function that prints numbers followed by a new line.

	Prototype: void print_numbers(const char *separator, const unsigned int n, ...);.
	separator is the string to be printed between numbers
	n is the number of integers passed.
	if separator is null , it it not printed.

2-print_strings.c

	A function that prints strings followed by a new line.

	Prototype: void print_stringss(const char *separator, const unsigned int n, ...);.
	separator is the string to be printed between strings.
	n is the number of strings passed to the function.
	if separator is null , it it not printed.
	If one string is NULL, (nil) is printed instead.

3-print_all.c

A function that prints anything followed by a new line.

	Prototype: void print_all(const char * const format, ...);.