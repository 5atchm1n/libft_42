/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:27:37 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/21 16:29:36 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_strlen(char *src)
{
	int	l;

	l = 0;
	while (src[l] != '\0')
		l++;
	return (l);
}

char			*ft_strdup(const char *s)
{
	int	i;
	char	*dup;

	i = 0;
	if (!(dup = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
