/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 14:59:20 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/21 15:26:59 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t num, size_t size)
{
	size_t	t;
	size_t	i;
	void *ret;

	if (!num || !nsize)
		return(NULL);
	t = num * size;
	if (size != t / num)
		return(NULL);
	i = 0;
	if(!(ret = malloc(t)))
		return (NULL);
	while (i < num)
	{
		*(ret + i) = 0;
		i++;
	}
	return (ret);
}
