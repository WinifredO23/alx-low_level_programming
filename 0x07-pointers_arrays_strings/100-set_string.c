#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to be updated.
 * @to: Pointer to the new char value.
 *
 * Return: No return value (void).
 */
void set_string(char **s, char *to)
{
	*s = to;
}
