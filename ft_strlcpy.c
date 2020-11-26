/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:26:50 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/25 03:22:17 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
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
