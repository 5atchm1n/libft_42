/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:40:34 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/21 04:18:45 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2)
		return ((char *)s1);
	while (*s1 && i < len)
	{
		if (*s1 == *s2)
		{
			while (*s2 && *(s1 + j) == *(s2 + j))
				j++;
			return ((char *)s1);
		}
		s1++;
		i++;
	}
	return (NULL);
}
