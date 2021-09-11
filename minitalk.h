/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:42:35 by gjailbir          #+#    #+#             */
/*   Updated: 2021/09/07 16:42:36 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct s_data
{
	int	c;
	int	count;
}	t_data;

#endif