/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:58:04 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/21 18:09:34 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		count;
	size_t	i;

	i = 0;
	if (!(needle[i]))
		return ((char *)(haystack));
	while (haystack[i] != 0 && i < len)
	{
		count = 0;
		while (needle[count])
		{
			if (needle[count] != haystack[i + count])
				break ;
			count++;
		}
		if (needle[count] == '\0' && (i + count <= len))
			return ((char *) &(haystack[i]));
		i++;
	}
	return (NULL);
}
