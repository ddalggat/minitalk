/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 14:46:39 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/19 17:53:28 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*dst;
	unsigned char	*sr;

	dst = (unsigned char *) dest;
	sr = (unsigned char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (count-- > 0)
		dst[count] = sr[count];
	return (dest);
}
