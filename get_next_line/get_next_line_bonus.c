/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:17:24 by sshakya           #+#    #+#             */
/*   Updated: 2021/05/19 19:08:47 by sshakya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	gnl_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	gnl_check(char **line, char *gnline)
{
	if (!line || !gnline)
		return (-1);
	return (1);
}

static int	gnl_return(char **line, char **gnline)
{
	int		ret;

	ret = 0;
	if (*gnline)
		*line = *gnline;
	else
	{
		*line = malloc(sizeof(char) * 1);
		if (*line == NULL)
			return (-1);
		*line[0] = '\0';
	}
	*gnline = NULL;
	return (ret);
}

static char	*gnl_read(int fd, char *gnline)
{
	char	buffer[BUFFER_SIZE + 1];
	int		n;

	n = 1;
	while (n > 0)
	{
		n = read(fd, buffer, BUFFER_SIZE);
		buffer[n] = '\0';
		gnline = gnl_join(gnline, buffer);
		if (gnline == NULL)
			return (-1);
		flag = gnl_find(gnline);
		if (flag != -1)
			break ;
	}
	return (gnline);
}

int	get_next_line(int fd, char **line)
{
	static char	*gnline[FDMAX];
	char		buffer[BUFFER_SIZE + 1];
	int			n;
	int			flag;

	if ((read(fd, buffer, 0) < 0) || fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	gnl_read(fd, gnline);
	flag = gnl_find(gnline[fd]);
	if (flag != -1)
	{
		*line = gnl_sub(gnline[fd], 0, flag, 0);
		gnline[fd] = gnl_dup(&gnline[fd][flag + 1], gnline[fd]);
		return (gnl_check(line, gnline[fd]));
	}
	return (gnl_return(line, &gnline[fd]));
}
