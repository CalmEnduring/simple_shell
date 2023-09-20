#include "shell_h.h"
/**
 * read_order - reads user input from stdin
 * @order: command
 * @size: size of command
 *
 * Return: void
 */
void read_order(char *order, size_t size)
{
	if (fgets(order, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			prnt("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			prnt("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	order[strcspn(order, "\n")] = '\0';
}
