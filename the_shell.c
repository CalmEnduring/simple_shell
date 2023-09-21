#include "shell_h.h"
/**
 * main - entry point for shell
 *
 * Return: 0 on success
 */
int main(void)
{
	char order[150];

	while (5) /* infinite loop */
	{
		prompt_user(); /* prompt user for commands */
		read_order(order, sizeof(order)); /* read stdin from user */
		exec_order(order); /* execute command */
	}
	return (0);
}
