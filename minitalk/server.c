/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamiri <aylamiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:34:21 by aylamiri          #+#    #+#             */
/*   Updated: 2025/02/21 14:55:35 by aylamiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int sig, siginfo_t *siginfo, void *moreinfo)
{
	static int						pid;
	static int						bit_index;
	static unsigned char			current_char;

	(void)moreinfo;
	if (pid == 0 || pid != siginfo->si_pid)
	{
		pid = siginfo->si_pid;
		bit_index = 0;
		current_char = 0;
	}
	if (sig == SIGUSR1)
		current_char |= (1 << bit_index);
	bit_index++;
	if (bit_index == 8)
	{
		if (current_char == '\0')
			ft_printf("\n");
		else
			write(1, &current_char, 1);
		current_char = 0;
		bit_index = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("the server PID = %d\n", getpid());
	sa.sa_sigaction = &signal_handler;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
