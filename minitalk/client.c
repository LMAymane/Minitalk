/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamiri <aylamiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:13:45 by aylamiri          #+#    #+#             */
/*   Updated: 2025/02/21 16:09:52 by aylamiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_char(int server_pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c & (1 << i))
		{
			if (kill(server_pid, SIGUSR1) < 0)
			{
				write(2, "ERROR : Failed to send signal !!\n", 33);
				exit(1);
			}
		}
		else
		{
			if (kill(server_pid, SIGUSR2) < 0)
			{
				write(2, "ERROR : Failed to send signal !!\n", 33);
				exit(1);
			}
		}
		usleep(700);
		i++;
	}
}

static int	check_pid(char *pid_av)
{
	int	pid;

	pid = ft_atoi(pid_av);
	if (pid <= 0)
	{
		write(2, "ERROR : Invalid PID !!\n", 23);
		return (-1);
	}
	return (pid);
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	i = 0;
	if (ac != 3 || av[1][0] == '\0' || av[2][0] == '\0')
	{
		write(2, "Enter: ./program_name <PID> <your_message>\n", 44);
		return (1);
	}
	pid = check_pid(av[1]);
	if (pid == -1)
		return (1);
	while (av[2][i])
	{
		send_char(pid, av[2][i]);
		i++;
	}
	send_char(pid, '\0');
	return (0);
}
