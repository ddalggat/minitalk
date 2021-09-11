/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 13:15:24 by gjailbir          #+#    #+#             */
/*   Updated: 2021/09/07 16:49:43 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int chr, size_t n)
{
	unsigned char	*dest1;

	dest1 = (unsigned char *) dest;
	while (n > 0)
		dest1[--n] = (unsigned char) chr;
	return (dest);
}
