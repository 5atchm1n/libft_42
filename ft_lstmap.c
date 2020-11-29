/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 02:23:26 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/29 00:09:51 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*temp;

	if (lst->next == NULL)
		return (NULL);
	head = NULL;
	while (lst != NULL && f != NULL)
	{
		temp = f(lst->content);
		if (temp == NULL)
		{
			if (del != NULL)
				ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, ft_lstnew(temp));
		lst = lst->next;
	}
	return (head);
}
