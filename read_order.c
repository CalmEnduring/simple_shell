#include "shell_h.h"
/**
 * read_order - reads user input from stdin
 * @order: command
 * @size: size of command
 *
 * Return: void
 */
void read_order(char *order, size_t size)
{	/* if user input is NULL */
	if (fgets(order, size, stdin) == NULL)
	{
		if (feof(stdin)) /* check whether EOF was set */
		{
			prnt("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			prnt("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	} /* removes the newline character and NULL terminates */
	order[strcspn(order, "\n")] = '\0';
}
