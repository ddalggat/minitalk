/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:42:11 by gjailbir          #+#    #+#             */
/*   Updated: 2021/09/07 16:42:12 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_issend(int pid, int sig)
{
	if (kill(pid, sig) == -1)
	{
		ft_putstr_fd("Fail, packages not delivered!\n", 1);
		exit(1);
	}
}

static void	ft_send_char(int pid, char c)
{
	int	i;

	i = 128;
	while (i >= 1)
	{
		if (i & c)
			ft_issend(pid, SIGUSR1);
		else
			ft_issend(pid, SIGUSR2);
		i = i >> 1;
		usleep(150);
	}
}

static int	ft_isnumeric(char *str)
{
	while (*str)
		if (!ft_isdigit(*str++))
			return (0);
	return (1);
}

int	main(int arc, char **arv)
{
	int	pid;

	if (arc != 3)
	{
		ft_putstr_fd("Ex.: ./client [pid] [message]\n", 2);
		return (1);
	}
	else if (!ft_isnumeric(arv[1]))
	{
		ft_putstr_fd("Enter correct PID!!!\n", 2);
		return (1);
	}
	pid = ft_atoi(arv[1]);
	while (*(arv[2]))
		ft_send_char(pid, *arv[2]++);
	ft_send_char(pid, 10);
	return (0);
}
