/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:23:37 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/24 16:08:19 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*substr;

	i = 0;
	if (!str)
		return (NULL);
	if (len >= ft_strlen(str))
		len = ft_strlen(str);
	substr = (char *) malloc(len + 1);
	if (!substr)
		return (NULL);
	l = ft_strlen(str) - 1;
	if (start <= l)
	{
		while (i < len)
		{
			substr[i] = str[(size_t) start + i];
			i++;
		}
	}
	substr[i] = 0;
	return (substr);
}
