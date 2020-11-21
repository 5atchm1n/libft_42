/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:21:09 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/21 03:15:27 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static	int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (*(str + i) == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
