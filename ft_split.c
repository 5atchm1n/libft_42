/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:58:39 by sshakya           #+#    #+#             */
/*   Updated: 2020/12/01 18:31:02 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_size(char const *str, char c)
{
	size_t			size;

	size = 0;
	if (c == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*(str + 1) == '\0')
			return (size + 1);
		if (*str == c && *(str + 1) != c)
			size++;
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
	if (str[i] == '\0')
		return (NULL);
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
	n = 0;
	while (size-- > 0)
	{
		len = 0;
		while (*str && *str == c)
			str++;
		while (*str && *str != c)
		{
			len++;
			str++;
		}
		tab[n] = ft_set_string((str - len), len);
		n++;
	}
	return (tab);
}
