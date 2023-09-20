#include "shell_h.h"
/**
 * prnt - prints to stdout
 * @string: text to print
 *
 * Return: void
 */
void prnt(const char *string)
{
	write(1, string, strlen(string));
}
