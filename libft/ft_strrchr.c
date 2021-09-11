/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:10:24 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/24 15:29:59 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*count;

	i = 0;
	count = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			count = ((char *) s + i);
		i++;
	}
	if (c == 0 && s[i] == 0)
		count = ((char *) s + i);
	return (count);
}
