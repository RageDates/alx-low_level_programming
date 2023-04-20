#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H


#include <stddef.h>
#include <stdlib.h>

/**
 * op_func_t - Typedef for funct
 */
typedef int (*op_func_t)(int, int);
/**
 * op_func_t - Typedef for funct
 */
typedef struct
{
	char *op;
	int (*func)(int a, int b);
} op_t;

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

#endif

