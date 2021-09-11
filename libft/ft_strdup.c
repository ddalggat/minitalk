/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:03:40 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/22 13:15:36 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
