/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:12:20 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/28 23:33:55 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	if (lst->next == NULL)
		return (1);
	while (lst != NULL)
	{
		lst++;
		size++;
	}
	return (size);
}
*/
int	ft_lstsize(t_list *lst)
{
	if (lst == NULL)
		return (0);
	if (lst->next == NULL)
		return (1);
	
	return (1 + ft_lstsize(lst->next));
}

