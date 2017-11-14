/*
** command.h for client in /home/alexandre/Documents/git/fileTransfert/client/include
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:05:12 2017 alexandre Chamard-bois
** Last update Tue Nov 14 23:08:13 2017 alexandre Chamard-bois
*/

#ifndef COMMAND_H_
# define COMMAND_H_

typedef struct	tab_commands {
	char	*cmd;
	int	(*func)(int ac, char **av);
}	tab_commands_t;

int cmd_cd(int ac, char **av);
int cmd_exit(int ac, char **av);
int cmd_debug(int ac, char **av);

#endif
