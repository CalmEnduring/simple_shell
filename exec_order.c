#include "shell_h.h"
/**
 * exec_order - executes user's command
 * @order: command to execute
 *
 * Return: void
 */
void exec_order(const char *order)
{
	char *params[122], *tkz; /* arguments, token */
	int param_c = 0; /* argument count */
	pid_t baby_pid = fork(); /* make child process ID */

	if (baby_pid == 0) /* on success */
	{
		tkz = strtok((char *)order, " "); /* start at first token */
		while (tkz) /* while token doesn't equal NULL */
		{
			params[param_c++] =  tkz; /* assign 1st token */
			tkz = strtok(NULL, " "); /* move to next token */
		}
		params[param_c] = NULL; /* terminate string */

		execvp(params[0], params); /* execute command */

		perror("./shelly"); /* print error on failure */
		exit(EXIT_FAILURE);
	}
	else if (baby_pid == -1) /* on failure */
	{
		perror("./shelly"); /* print error on failure */
		exit(EXIT_FAILURE);
	}
	else
	{	/* wait until child process is finished */
		wait(NULL);
	}
}
