/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:40:32 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/20 19:33:52 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static	int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		s;
	size_t		d;

	d = ft_strlen(dst);
	i = d;
	if (size == 0)
		return (ft_strlen(src));
	if (size < d)
		return (size + ft_strlen(src));
	s = 0;
	if (size > i)
		while (src[s] && size - i > 1)
		{
			dst[i] = src[s];
			i++;
			s++;
		}
	dst[i] = '\0';
	while (src[s] != '\0')
		s++;
	return (d + s);
}
