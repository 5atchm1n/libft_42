/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:58:39 by sshakya           #+#    #+#             */
/*   Updated: 2020/12/02 22:21:26 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			*ft_reset(char **tab, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (tab[i])
			free(tab[i]);
	}
	free(tab);
	return (NULL);
}

static size_t		ft_size(char const *str, char c)
{
	size_t			size;
	int				end;

	size = 0;
	end = 1;
	if (!str)
		return (size);
	if (c == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str != c && end)
			size++;
		end = *str == c;
		str++;
	}
	return (size);
}

static char			*ft_set_string(char const *str, size_t len)
{
	size_t			i;
	char			*ret;

	if (!(ret = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = str[i];
		i++;
	}
	ret[len] = '\0';
	return (ret);
}

char				**ft_split(char const *str, char c)
{
	char			**tab;
	size_t			size;
	size_t			len;
	size_t			n;

	size = ft_size(str, c);
	if (!(tab = malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	tab[size] = NULL;
	if (!str)
		return (tab);
	n = 0;
	while (size-- > 0)
	{
		len = 0;
		while (str && *str == c)
			str++;
		while (str && *str != c)
		{
			len++;
			str++;
		}
		if (!(tab[n] = ft_set_string((str - len), len)))
			return (ft_reset(tab, n));
		n++;
	}
	return (tab);
}
