/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:28:49 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/26 21:10:47 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_src;
	unsigned char	*new_dest;

	new_src = (unsigned char *)src;
	new_dest = dest;
	i = 0;
	while (i < n)
	{
		*new_dest = *new_src;
		new_dest++;
		new_src++;
		i++;
	}
	return (dest);
}
