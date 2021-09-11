/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:20:13 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/19 17:55:38 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	i = -1;
	dst = (unsigned char *) dest;
	src = (unsigned char *) source;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
		while (n-- > 0)
			dst[n] = src[n];
	else
	{
		while (++i < n)
			dst[i] = src[i];
	}
	return (dest);
}
