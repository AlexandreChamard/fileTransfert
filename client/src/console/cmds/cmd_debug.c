/*
** command_exit.c for client in /home/alexandre/Documents/git/fileTransfert/client/src/console/commands
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:28:37 2017 alexandre Chamard-bois
** Last update Wed Nov 15 23:41:54 2017 alexandre Chamard-bois
*/

#include <stdio.h>

int cmd_debug(int ac, char **av)
{
	printf("nb args: %d\n", ac);
	for (int i = 0; av[i]; i++) {
		printf("[%s]\n", av[i]);
	}
	return (0);
}
