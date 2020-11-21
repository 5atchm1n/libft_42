/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:33:51 by sshakya           #+#    #+#             */
/*   Updated: 2020/11/21 16:46:18 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	l;

	l = 0;
	if (!(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[l] != '\0' && l < len)
	{
		sub[l] = s[l];
		l++;
	}
	sub[l] = '\0';
	return (sub);
}
