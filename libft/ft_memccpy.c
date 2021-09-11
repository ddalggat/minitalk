/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 14:33:27 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/19 17:30:03 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dst = (unsigned char *) dest;
	src = (unsigned char *) source;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < count)
	{
		dst[i] = src[i];
		if (src[i] == (unsigned char) ch)
			return ((void *) dest + i + 1);
		i++;
	}
	return (NULL);
}
