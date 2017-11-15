/*
** command_exit.c for client in /home/alexandre/Documents/git/fileTransfert/client/src/console/commands
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Tue Nov 14 22:28:37 2017 alexandre Chamard-bois
** Last update Wed Nov 15 23:41:26 2017 alexandre Chamard-bois
*/

#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void exec_child(int fds[2], int ac, char **av)
{
	(void)ac;
	*av = strdup("/bin/ls");
	close(fds[0]);
	dup2(fds[1], STDOUT_FILENO);
	execve(*av, av, NULL);
	perror(NULL);
	exit(1);
}

int exec_father(int fds[2], pid_t pid)
{
	int save_stdin = dup(STDIN_FILENO);
	char *buff = NULL;
	size_t len = 0;
	int ret;

	close(fds[1]);
	dup2(fds[0], STDIN_FILENO);
	while (getline(&buff, &len, stdin) > 0) {
		printf("%s", buff);
	}
	free(buff);
	waitpid(pid, &ret, 0);
	dup2(save_stdin, STDIN_FILENO);
	close(save_stdin);
	return (ret);
}

int cmd_shell_ls(int ac, char **av)
{
	int fds[2];
	int ret = -1;
	pid_t pid;

	if (pipe(fds) == -1 || (pid = fork()) == -1) {
		perror(NULL);
		return (1);
	} else if (!pid) {
		exec_child(fds, ac, av);
	} else {
		ret = exec_father(fds, pid);
	}
	return (ret);
}
