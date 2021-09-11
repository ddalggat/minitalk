/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:37:27 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/23 16:37:56 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_result(char *list, int i, long num, int n)
{
	list = (char *)malloc(sizeof(char) * i + 1);
	if (!list)
		return (NULL);
	list[i] = '\0';
	i--;
	num = n;
	if (n < 0)
		num = -num;
	while (i >= 0)
	{
		list[i] = num % 10 + 48;
		num /= 10;
		i--;
	}
	if (n < 0)
		list[0] = '-';
	return (list);
}

char	*ft_itoa(int n)
{
	int		i;
	long	num;
	char	*list;

	i = 0;
	num = n;
	list = "\0";
	if (num == 0)
	{
		list = (char *)malloc(sizeof(char) * 2);
		list[0] = 48;
		list[1] = 0;
		return (list);
	}
	if (num < 0)
	{
		num = -num;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (ft_result(list, i, num, n));
}
