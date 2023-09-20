#include "shell_h.h"
/**
 * main - entry point for shell
 *
 * Return: 0 on success
 */
int main(void)
{
	char order[100];

	while (5)
	{
		prompt_user();
		read_order(order, sizeof(order));
		exec_order(order);
	}
	return (0);
}
