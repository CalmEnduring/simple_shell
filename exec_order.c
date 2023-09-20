#include "shell_h.h"
/**
 * exec_order - executes user's command
 * @order: command to execute
 *
 * Return: void
 */
void exec_order(const char *order)
{
	pid_t baby_pid = fork();

	if (baby_pid == 0)
	{
		execlp(order, order, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else if (baby_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
