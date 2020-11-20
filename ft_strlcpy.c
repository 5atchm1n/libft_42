/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:26:50 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/20 19:35:27 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t		ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	l;
	char	*ret;

	ret = dest;
	l = ft_strlen(src);
	if (size == 0)
		return (l);
	size = size - 1;
	while (*src != '\0' && size > 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	ret[dest - ret] = '\0';
	dest = ret;
	return (l);
}
