#ifndef FUNCTION_POINTERS_HEADER_H
#define FUNCTION_POINTERS_HEADER_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
