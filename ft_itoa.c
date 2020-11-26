/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 00:16:17 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/25 16:20:09 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_power_ten(int i)
{
	int	len;

	len = 1;
	while (i > 9)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

static void	ft_prepend(char c, char *str, int len)
{
	if (len != 0)
		str[len - 1] = c;
	if (len == 0)
		str[len] = c;
}

char		*ft_itoa(int n)
{
	int	i;
	int	len;
	char	c;
	char	*ret;

	len = ft_power_ten(n);
	if (!(ret = malloc(sizeof(int) * (len + 1))))
		return (NULL);
	ret[len] = '\0';
	i = n;
	while (i > 9)
	{
		c = (i % 10) + '0';
		ft_prepend(c, ret, len);
		i = i / 10;
		len--;
	}
	c = (i % 10) + 48;
	ft_prepend(c, ret, len);
	return (ret);
}
