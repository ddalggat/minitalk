/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjailbir <gjailbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:20:25 by gjailbir          #+#    #+#             */
/*   Updated: 2021/04/30 15:21:21 by gjailbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **s, int i)
{
	while (i < 0)
	{
		free (*s--);
		i--;
	}
	free (s);
	return (NULL);
}

static int	ft_len(char *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_loop(char *s, int i, int *start, char c)
{
	while (s[i] && s[i] == c)
		i++;
	*start = i;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_inner(char *s, char **str, char c, int size)
{
	int		i;
	int		start;
	int		end;
	char	*tmp;
	int		big;

	i = 0;
	big = 0;
	while (s[i] && big < size)
	{
		i = ft_loop(s, i, &start, c);
		tmp = (char *)ft_calloc(i - start + 1, sizeof(char));
		if (!tmp)
			return (ft_free(str, i));
		end = 0;
		while (end < (i - start))
		{
			tmp[end] = s[start + end];
			end++;
		}
		str[big++] = tmp;
		if (!s[i])
			break ;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	if (!s)
		return (NULL);
	i = ft_len((char *) s, c);
	str = (char **)ft_calloc(i + 1, sizeof(char *));
	if (!str)
		return (NULL);
	str = ft_inner((char *) s, str, c, i);
	if (!str)
		return (NULL);
	return (str);
}
